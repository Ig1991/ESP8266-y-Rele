int rele1=16;//D0

void setup() {
  // put your setup code here, to run once:
 pinMode(rele1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rele1,HIGH);
  delay(5000);
  digitalWrite(rele1,LOW);
  delay(5000);
}
