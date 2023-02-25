#include <ESP8266WiFi.h>//Librería del micrcontrolador ESP8266
#include <PubSubClient.h>//Librería para publicar y suscribir mediante MQTT

const char *ssid = "HUAWEI P30 lite";//Nombre WIFI
const char *password = "Nacho2020";//Contraseña WIFI
const char* mqtt_server = "test.mosquitto.org"; //address o servidor mqtt
const char* keyDevice = "";
const char* user = ""//Usuario del broker mqtt
const char* senha = "";//Contraseña del broker mqtt
WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int value = 0;
int torniquete1 = 16; //Conectarlo al D0
void setup_wifi() {
  delay(10);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println("OK");
  }
void callback(char* topic, byte* payload, unsigned int length) {
 String topico = topic;
if(topico=="luz/01")
{
    if (((char)payload[0] == '1')) { // 1 para prender
      digitalWrite(torniquete1,HIGH);
      Serial.println("Abrir");
  } else if (((char)payload[0] == '0')) { // 0 para apagar
      digitalWrite(torniquete1,LOW);
      Serial.println("Cerrar");}
}
}

void reconnect() {

  if (!client.connected()) {

    if (client.connect(keyDevice,user,senha)){//Servidor broker es el usuario y prueba12 la contraseña en mqtt dash
      Serial.println("connected");
      client.subscribe("luz/#"); // Topico al momento de crear el boton
    } else {
      delay(5000);
    }
  }
}
void setup() {
  pinMode(torniquete1, OUTPUT);
  Serial.begin(9600);
  Serial.println("iniciando");
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);   
}

void loop()
{
  if (!client.connected())
  {
    reconnect();
  }
  client.loop();
}
