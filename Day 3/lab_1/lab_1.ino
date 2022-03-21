
void setup() {
  // put your setup code here, to run once:
  //will work with pin, what will we do with 13th pin
  pinMode(13, OUTPUT); //(pin number, Mode[input/output]);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // will use the pin
  digitalWrite(13, HIGH); // (pin number, Status [high 5 volts,1/low 0 volts,0]);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  
  digitalWrite(12, HIGH); 
  delay(500);
  digitalWrite(12, LOW); 
  delay(500);
  
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  
  digitalWrite(10, HIGH); 
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  
  digitalWrite(8, HIGH); 
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(500);
  
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);

  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
}

// arduino uno select from P
//LED Active one
