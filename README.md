# ESP8266-y-Rele
Las personas muchas veces eligen reemplazar el NodeMCU por un arduino porque desconocen una particularidad que tiene el ESP8266
# Proposito
Poder manejar con un NodeMCU un rele de 5v considerando que esté microcontrolador tiene salidas que tienen un maximo de 3.3V.
# Solución
A traves del VIN podemos alimentar con 5V sin problemas lo que permite utilizar un rele que necesita un pulso con ese valor.
# Lista de materiales
- 1 NodeMCU Esp8266
- 1 Fuente de 5V
- 1 Modulo con dos reles.
- 2 ampolletas de 220v AC o 110V AC
- 2 Enchufes
# Esquema de conexión
[maxresdefault](https://user-images.githubusercontent.com/114893956/221368231-e9662fc0-dd4d-4736-9eec-ac6758c731fa.jpg)
# Driver para NodeMCU
https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
# Instalar ESP8266 en el Ide deArduino
https://www.instructables.com/INSTALANDO-LA-PLACA-NODEMCU-EN-EL-SOFTWARE-DE-ARDU/
# Prueba básica con Arduino
https://github.com/Ig1991/ESP8266-y-Rele/blob/main/Basico_un_rele.ino
# Controlar a distancia con MQTT
https://github.com/Ig1991/ESP8266-y-Rele/blob/main/un_rele_mqtt.ino
#Servidor MQT 
Cómo instalar tu servidor MQTT en la nube 
https://www.youtube.com/watch?v=p9Bf_lBPiTE&t=43s
