byte A,B,C;
byte a;
void setup() {
  // put your setup code here, to run once:

  pinMode(13, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(13);
  A=digitalRead(11);
  B=digitalRead(10);
  C=digitalRead(9);

  if(a==LOW){
    digitalWrite(8, A^B);
    digitalWrite(7, A&B);
  }
  else{
    digitalWrite(8, A^B^C);
    digitalWrite(7, (A&B)|(A&C)|(B&C));
  }

}
