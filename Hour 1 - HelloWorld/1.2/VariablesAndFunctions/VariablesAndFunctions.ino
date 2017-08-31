
void setup() {   
  Serial.begin(9600); 
}

void loop() { 
 int num1 = 1; 
 int num2 = 2; 
 
 int sum = AddInts(num1, num2); 
 
 Serial.println(sum); 
 
 delay(1000); 
}

int AddInts (int num1, int num2){
  return num1 + num2;
}

