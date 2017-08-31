
void setup() {   
  /*
   * as before, we start a serial connection with the computer at the standard 9600 baud. 
   */
  Serial.begin(9600); 
}

void loop() { 

 /*
  * We create a new variable, of type integer. We name that variable a and give it a value of 1.
  */
 int a = 2; 

 /*
  * We create a new variable, of type integer. We name that variable b and give it a value of 2.
  */
 int b = 1; 

 /*
  * We create a new variable, of type integer. We assign that variable the name sum and assign
  * its value to the return value of the function AddInts with num1 and num2 as the arguments. 
  */
 int sum = AddInts(a, b); 

 /*
  * we print the value of sum to the serial port. 
  */
 Serial.println(sum); 

  /*
  * we wait 1 second before repeating.
  */
 delay(1000); 
 
}

/*
 * We define a new fuction, which takes two numbers as inputs and returns their sum
*/
int AddInts (int num1, int num2){
  return num1 + num2;
}

