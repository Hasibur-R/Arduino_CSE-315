byte a,b;
void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(8); //(pin number)
  b=digitalRead(9);
  if (a == HIGH && b == LOW)
  {
    digitalWrite(5, HIGH);
  }
  else if(a == LOW && b == HIGH)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5, LOW);
  }
}
