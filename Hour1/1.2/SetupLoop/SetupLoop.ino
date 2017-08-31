
void setup() {  
 /*
  * this code tells the Arduino to start communications over the serial port.
  * This sends messages over the USB connection to the computer. The number of 9600
  * is the 'baud rate' which measures how fast the data is sent. For all our purporses
  * in this workshop, we will use a a baud rate of 9600. 
  */
 Serial.begin(9600);

 
/*
 * This code write the string 'setup' to the serial port. 
 * If we have a serial monitor connected, we will see this text appear on the computer screen. 
 */
 Serial.println("setup");

 /*
  * The delay word tell the Arduino to stop and do nothing for some 
  * amount of time. The units are 1/1000th of a second, also known as a millsecond
  * this means that a value of 1000 means to wait for 1 second. 
  */
 delay(1000);
}

void loop() { 
  /*
   * Again, we will print a string to the serial port. This time the string we print is 'loop'
   */
  Serial.println("loop");

  /*
   * Again, we wait 1 second before continuing. We do this so the output is readable
   * the Arduino will run far faster than we are capable of reading the output. 
   */
  delay(1000);
}


