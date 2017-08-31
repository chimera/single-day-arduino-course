
/*
 * this line creates a new global variable of type integer. 
 * The variable is named i and give a value of zero.
 * This will count how many times loop has been called. 
 */
int i = 0;

void setup() {    
 Serial.begin(9600)
 Serial.println("Starting Counter...");
 delay(1000);
}

void loop() { 
  /*
   * we add one to the current value of i using the special symbol ++ 
  */
  i++;

  /*
   * We print the value of i to the Serial port.
   */
  Serial.Println("i");  
  delay(1000);
}


