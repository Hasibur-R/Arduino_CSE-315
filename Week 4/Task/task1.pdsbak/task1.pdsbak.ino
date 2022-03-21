int ledPin=13;
int ledPin2=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int fadeValue=0; fadeValue<=255; fadeValue+=5){
    analogWrite(ledPin,fadeValue);
    delay(30);
  }
  for(int fadeValue=255; fadeValue>=0; fadeValue-=5){
    analogWrite(ledPin,fadeValue);
    delay(30);
  }

  for(int fadeValue=0; fadeValue<=255; fadeValue+=5){
    analogWrite(ledPin2,fadeValue);
    delay(30);
  }
  for(int fadeValue=255; fadeValue>=0; fadeValue-=5){
    analogWrite(ledPin2,fadeValue);
    delay(30);
  }
  }
