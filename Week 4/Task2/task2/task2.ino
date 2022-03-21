void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(19101009);
  Serial.println();
  Serial.print("H");
  Serial.println();
  Serial.print("My name is Md. Hasibur Rahman");
  Serial.println();
  Serial.print(10.47582546);
  Serial.println();

  delay(250);
  Serial.print(109, BIN);
  Serial.println();
  Serial.print(109, OCT);
  Serial.println();
  Serial.print(109, DEC);
  Serial.println();
  Serial.print(109, HEX);
  Serial.println();
  Serial.print(109.111010, 0);
  Serial.println();
  Serial.print(109.111010, 2);
  Serial.println();

  delay(250);
  Serial.print("DEC");
  Serial.print("\t");

  Serial.print("BIN");
  Serial.println();

    for(int x=0; x<10; x++){
      
      Serial.print(x, DEC);
      Serial.print("\t");
      Serial.print("     ");
      Serial.print(x, BIN);
      Serial.println();
      delay(250);
    }
    Serial.println();
    

}
