# ESP32_Canopus Module Quick Start Guide

## ✌️✌️✌️ Welcome! ✌️✌️✌️
Hi, im Namnam 🕴🏼.  
Please contact me if you have a need to develop ioT products.  
- 👊🏻Facebook https://www.facebook.com/kuem0912/ 
- 👊🏻Email: thanhnamLT5@gmail.com
- 👊🏻Number phone: +84932912789
- 👊🏻Whatsapp: +84969809444


### Information ESP32_Canopus board  
  
#### 🕵🏻‍♀️Version 1.0  
|     **Object**    |      **Detail conponent**      |          **Note**     |
| ----------------- | ------------------------------ | ----------------------|
|        Power      | MC34063A                       | 5-35VDC               |
|       Ethernet    | LAN8720A  (RJ45: HR911105A)    | -                     |
|        RS485      | SP485EE                        | Serial2, auto DERE    |
|         I2C       | -                              | SDA = IO33, SCL = IO4 |
|      Led blue     | -                              | PIN IO15              |
|      Led yellow   | -                              | PIN IO2               |
|       Button      | -                              | PIN IO36              |
|       ESP32       | ESP32 WROOM 32D                | -                     |
|       Case        | Plastic                        | Mount dinrail         |  

#### 🧑🏻‍🔧 Hardware Setup 
-Connect power via terminal DC+ and DC- or via USB type C, both way can same time.  
-Connect ethernet (if need) for run ethernet, modbus TCP/IP...etc related to ethernet.  
-Connect RS485 (pin A to A, pin B to B) with device modbus, or PLC, PC/laptop tool...  

#### 🧑🏼‍💻 Software
+Install IDE arduino. Follow [this](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE), skip if you done.  
+Install driver CH340. Follow [this](https://electropeak.com/learn/how-to-install-ch340-driver/), skip if you done.  
+Install ESP32 in manager board:  
  - Down load this folder: [hardware](https://mega.nz/file/e3wlwIAI#vFoR5nT5x3zT5wkQSVknqihluzf_9Ng89H5CxPmu3Io)  
  - Extract at ...\Documents\Arduino. Ex my computer: C:\Users\NamPC\Documents\Arduino  
  - Go to ...\Documents\Arduino\hardware\espressif\esp32\tools  
  - Click get and gen:  
  ![ESP32 install](https://user-images.githubusercontent.com/49629370/235330978-d56cb96c-8032-4c83-995e-6e6720e585da.png)
  + Check it in IDE:  
  ![image](https://user-images.githubusercontent.com/49629370/235331088-db8737b9-3053-4350-bb5f-e3c348a513bb.png)  
    
    
## At here , you are ready 👌 to execute the sample code for the ESP32_CANOPUS board  
###  ⚠️ WARNING: Prepare yourself a cup of coffee ☕☕☕, because here is a fascinating journey with Canopus board 🤪.   
You will be stronger after working through the next 12 examples.

### (1) Blink led  

```c
#define LED_YELLOW 2 //Pin led color yellow is IO2
void setup() {
  // initialize digital pin LED_YELLOW as an output.
  pinMode(LED_YELLOW, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_YELLOW, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_YELLOW, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
You can find it in examples: [Download](https://github.com/NamNamIoT/ESP32_CANOPUS/tree/master/examples)  
### (2) Read modbus slave via RTU  
### (3) Read modbus slave via TCP/IP  
### (4) Serve master RTU (board is slave)  
### (5) Serve master TCP/IP (board is slave)  
### (6) Auto switch WiFi-Ethernet  
### (7) Auto switch many WiFi in list  
### (8) Push value modbus to MQTT  
### (9) On/off led via MQTT  
### (10) FOTA - update firmware via Internet with FTP  
### (11) WATCHDOG timmer  
### (12) Deep sleep  

