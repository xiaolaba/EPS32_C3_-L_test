//ref: https://blog.csdn.net/a1415539404a/article/details/124534428
// 2023-01-16, xiaolaba
//***************************************************************/ 
// 
//           -------------------------------------------
//           board: ESP32C3 Dev Module
//           Flash Mode: "DIO"
//           -------------------------------------------
//
//***************************************************************/ 

// FLASH MODE, DIO a must !!
// 需要特别主要的是，合宙LuatOS在ESP32C3-CORE开发板的介绍网站页尾给出了使用注意事项，其中第3条非常之重要。

//    使用注意事项（第3条）：
//    IO12（GPIO12）、IO13（GPIO13）在QIO模式下为SPI信号SPIHD和SPIWP复用，为了增加可用GPIO数量，
//    开发板选择采用2线SPI的DIO模式，IO12、IO13并未连接flash，使用自己编译的软件时需要注意配置flash为DIO模式。

// 这意味着，在Arduino IDE进行程序的烧录时，必须要将Flash Mode配置为 "DIO"模式
//————————————————
//版权声明：本文为CSDN博主「メイキョウシスイ」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/a1415539404a/article/details/124534428

// 合宙LuatOS PCB
#define     LED_D4     12
#define     LED_D5     13

void setup() {

  Serial.begin(115200);
  pinMode(LED_D4, OUTPUT);
  pinMode(LED_D5, OUTPUT);

}


void loop() {

  Serial.println("Hello world!");
  
  digitalWrite(LED_D4, LOW);
  digitalWrite(LED_D5, HIGH);
  delay(500);
  digitalWrite(LED_D4, HIGH);
  digitalWrite(LED_D5, LOW);
  delay(500);
  
}
