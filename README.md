# ESP32_Canopus Module Quick Start Guide

#### Information ESP32_Canopus board

- Power: 5-24V
- Ethernet (LAN8720A + HR911105A)
- RS485 auto DERE x1 port (SP485EE)
- I2C x1 port
- Led status, button.
- Plastic case box
- ESP32 WROOM 32D

## ✌️✌️✌️ Welcome! ✌️✌️✌️
If you need modify or any request for design hardware, development of product IoT please contact me 🕴🏼:
- 👊🏻Facebook https://www.facebook.com/kuem0912/ 
- 👊🏻Email: thanhnamLT5@gmail.com
- 👊🏻Number phone: +84932912789
- 👊🏻Whatsapp: +84969809444

🕵🏻‍♀️Version 1.0

#### 🧑🏻‍🔧 Hardware Setup 
-Connect power via terminal DC+ and DC- or via USB type C, both way can same time.  
-Connect ethernet (if need) for run ethernet, modbus TCP/IP...etc related to ethernet.  
-Connect RS485 (pin A to A, pin B to B) with device modbus, or PLC, PC/laptop tool...  

#### 🧑🏼‍💻 Software
-Install IDE arduino. Follow [this](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE), skip if you done.  
-Install ESP32 in manager board:  
  + Down load this folder: [hardware](https://mega.nz/file/e3wlwIAI#vFoR5nT5x3zT5wkQSVknqihluzf_9Ng89H5CxPmu3Io)  
  + Extract at ...\Documents\Arduino. Ex my computer: C:\Users\NamPC\Documents\Arduino  
  + Go to ...\Documents\Arduino\hardware\espressif\esp32\tools  
  + Click get and gen:  
  ![ESP32 install](https://user-images.githubusercontent.com/49629370/235330978-d56cb96c-8032-4c83-995e-6e6720e585da.png)
  + Check it in IDE:  
  ![image](https://user-images.githubusercontent.com/49629370/235331088-db8737b9-3053-4350-bb5f-e3c348a513bb.png)  
  
## H2 Prepare yourself a cup of coffee, because here is a fascinating journey with Canopus board.   
You will be stronger after working through the next 9 examples.

## H3(1) Blink led  
![image](https://user-images.githubusercontent.com/49629370/235331527-af7d6654-5fdb-42ab-abee-dfee8e70fef5.png)  

## H3(2) Read modbus slave via RTU  
## H3(3) Read modbus slave via TCP/IP  
## H3(4) Serve master RTU (board is slave)  
## H3(5) Serve master TCP/IP (board is slave)  
## H3(6) Auto switch WiFi-Ethernet  
## H3(7) Auto switch many WiFi in list  
## H3(8) Push value modbus to MQTT  
## H3(9) On/off led via MQTT  
## H3(10) FOTA - update firmware via Internet with FTP  
## H3(11) WATCHDOG timmer  
## H3(12) Deep sleep  

