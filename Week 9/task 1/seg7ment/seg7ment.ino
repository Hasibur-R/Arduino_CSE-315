int i;
void h(int pinNo){
  digitalWrite(pinNo,HIGH);
  }
void l(int pinNo){
  digitalWrite(pinNo,LOW);
  }
  
void setup() {
  // put your setup code here, to run once:
  for(i=2; i<=8; i++){
    pinMode(i, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  zero();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
}

void zero(){
  h(2);h(3);h(4);h(5);h(6);h(7);l(8);delay(1000);
}
void one(){
  l(2);h(3);h(4);l(5);l(6);l(7);l(8);delay(1000);
}
void two(){
  h(2);h(3);l(4);h(5);h(6);l(7);h(8);delay(1000);
}
void three(){
  h(2);h(3);h(4);h(5);l(6);l(7);h(8);delay(1000);
}
void four(){
  l(2);h(3);h(4);l(5);l(6);h(7);h(8);delay(1000);
}
void five(){
  h(2);l(3);h(4);h(5);l(6);h(7);h(8);delay(1000);
}
void six(){
  h(2);l(3);h(4);h(5);h(6);h(7);h(8);delay(1000);
}

void seven(){
  h(2);h(3);h(4);l(5);l(6);l(7);l(8);delay(1000);
}

void eight(){
  h(2);h(3);h(4);h(5);h(6);h(7);h(8);delay(1000);
}

void nine(){
  h(2);h(3);h(4);h(5);l(6);h(7);h(8);delay(1000);
}
