byte A,B,C,D,Bo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  
  //pinMode(8, OUTPUT);
  //pinMode(7, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

  A=digitalRead(11);
  B=digitalRead(10);
  C=digitalRead(9);

  D=(A^B^C);
  Bo=((B&C)|(!A)&(B|C));
    //digitalWrite(8, D);
   // digitalWrite(7, B0);

    Serial.println(D);
    Serial.println(Bo);
    Serial.end();
  }
