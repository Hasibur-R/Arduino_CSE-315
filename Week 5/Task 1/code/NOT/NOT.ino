byte a;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(8); //(pin number)
  if(a==HIGH){
    digitalWrite(5, LOW);
  }
  else{
    digitalWrite(5, HIGH);
  }
}
