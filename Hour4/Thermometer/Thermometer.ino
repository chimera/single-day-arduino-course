/*Include the libraries from the BME280 sketch*/
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

/*Include the libraries from the OLED sketch*/
#include <Wire.h>
#include <Adafruit_SSD1306.h>

/*Include the global variables from the  BME280 sketch*/
int chipSelect = 10;
float sealevel = 1013.25;
Adafruit_BME280 bme(chipSelect);

/*Include the global variables from the  OLED sketch*/
Adafruit_SSD1306 oled(0);
int address = 0x3C;

void setup() {
  /*Initialize Serial at 9600 baud and print init message*/  
  Serial.begin(9600);
  Serial.println("initializing Thermometer...");     

  /*Initialize the BME280 as in the BME280 sketch*/  
   if (!bme.begin()) {
        Serial.println("BME280 Failed or Not Present");
        while (1);    
    } 
    Serial.println("...BME280 initialized");  

  pinMode(A3, OUTPUT);
  digitalWrite(A3, LOW);
  delay(1000);
  digitalWrite(A3, HIGH);

  
  /*Initialize the OLED as in the OLED sketch*/
  oled.begin(address); 
  oled.setTextColor(WHITE);
  oled.display();
  oled.setTextSize(4);
  
  /*wait 1 second before starting the program*/
  delay(1000);
}

void loop() {
  
  /*create a new variable of type double to hold the temperature reading*/
  double temp;

  /*set the value of that temperature reading to the output of the BME's read readTemperature function*/
  temp = bme.readTemperature();
  
  /*move the OLED cursor to the origin*/
  oled.setCursor(0,0);  

  /*clear the OLED display*/
  oled.clearDisplay();

  /*print the value of temp to the OLED display*/
  oled.print(temp);

  /*refresh the OLED display*/
  oled.display();
 
  
}
