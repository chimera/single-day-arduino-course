
#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled(0);
int address = 0x3C;

void setup() {   
  pinMode(A3, OUTPUT);
  digitalWrite(A3, LOW);
  delay(1000);
  digitalWrite(A3, HIGH); 
 
  oled.begin(address); 
  oled.setTextColor(WHITE);
  oled.display();
  oled.setTextSize(2); 
  oled.begin(address);   
  oled.setTextColor(WHITE);
  oled.display(); 
  delay(1000);
}

void loop(){
  int time = millis()/1000;
  oled.setCursor(0,0);  
  oled.clearDisplay();
  oled.print("running...");
  oled.print(time);
  oled.println(" sec");
  oled.display();
  delay(1000);
}

