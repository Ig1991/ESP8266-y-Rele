# ESP8266-y-Rele
Las personas muchas veces eligen reemplazar el NodeMCU por un arduino porque desconocen una particularidad que tiene el ESP8266
# Lista de materiales
- 1 NodeMCU Esp8266
- 1 Fuente de 5V
- 1 Modulo con dos reles.
- 2 ampolletas de 220v AC o 110V AC
- 2 Enchufes
# Proposito
Poder manejar con un NodeMCU un rele de 5v considerando que esté microcontrolador tiene salidas que tienen un maximo de 3.3V.
# Solución
A traves del VIN podemos alimentar con 5V sin problemas lo que permite utilizar un rele que necesita un pulso con ese valor.
# Esquema de conexión
[maxresdefault](https://user-images.githubusercontent.com/114893956/221368231-e9662fc0-dd4d-4736-9eec-ac6758c731fa.jpg)
# Driver para NodeMCU
https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
# Instalar ESP8266 en el Ide deArduino
https://www.instructables.com/INSTALANDO-LA-PLACA-NODEMCU-EN-EL-SOFTWARE-DE-ARDU/
# Prueba básica con Arduino

