byte A,B,C,D,AA;
void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  
}


void loop() {
  // put your main code here, to run repeatedly:
  A=digitalRead(12);
  B=digitalRead(11);
  C=digitalRead(10);
  D=digitalRead(9);

  AA=A&(A|B|C);
  digitalWrite(13, AA);

}
