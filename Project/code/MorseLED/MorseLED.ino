int led=3;  //dot indicator LED
int led2=2; //dash indicator LED
int led3=4; //active indicator LED
int dl=600, button=13,a=12,b=11,c=10,d=9,e=8,f=7,g=6,h=5;

int dl2=750;
int aa;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button, INPUT);
  
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);
  pinMode(d, INPUT);
  pinMode(e, INPUT);
  pinMode(f, INPUT);
  pinMode(g, INPUT);
  pinMode(h, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(button==HIGH){
    if(Serial.available()>0){
      aa=Serial.read();
      Serial.print(aa); // input display 
    }
    
    if(aa==65 || aa==97){//for A
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    
    if(aa==66 || aa==98){//For B
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    
    if(aa==67 || aa==99){//For C
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    
    if(aa==68 || aa==100){//For D
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    
    if(aa==69 || aa==101){//For E
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==70 || aa==102){//For F
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==71 || aa==103){//For G
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==72 || aa==104){//For H
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==73 || aa==105){//For I
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
     if(aa==74 || aa==106){//For J
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==75 || aa==107){//For K
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==76 || aa==108){//For L
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    
    if(aa==77 || aa==109){//For M
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==78 || aa==110){//For N
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==79 || aa==111){//For O
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==80 || aa==112){//For P
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==81 || aa==113){//For Q
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==82 || aa==114){//For R
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==83 || aa==115){//For s
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==84 || aa==116){//For T
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==85 || aa==117){//For U
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==86 || aa==118){//For V
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
     digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==87 || aa==119){//For W
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
     digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==88 || aa==120){//For X
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
     digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    if(aa==89 || aa==121){//For Y
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }

    if(aa==90 || aa==122){//For Z
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    aa=0;
    }
    }
//==========================================
//else if
//==========================================

    else if(button==LOW){
      if(a==HIGH && b==c==d==e==f==g==h==LOW){//for A
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    
    if(b==HIGH && a==c==d==e==f==g==h==LOW){//For B
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    
    if(c==HIGH && a==b==d==e==f==g==h==LOW){//For C
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    
    if(d==HIGH && a==b==c==e==f==g==h==LOW){//For D
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    
    if(e==HIGH && a==b==c==d==f==g==h==LOW){//For E
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(f==HIGH && a==b==c==d==e==g==h==LOW){//For F
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(g==HIGH && a==b==c==d==f==e==h==LOW){//For G
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(h==HIGH && a==b==c==d==f==g==e==LOW){//For H
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && b==HIGH && c==d==e==f==g==h==LOW){//For I
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
     if(a==HIGH && d==HIGH && c==d==e==f==g==h==LOW){//For J
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && c==HIGH && b==d==e==f==g==h==LOW){//For K
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && d==HIGH && c==b==e==f==g==h==LOW){//For L
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    
    if(a==HIGH && e==HIGH && c==d==b==f==g==h==LOW){//For M
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && f==HIGH && c==d==e==b==g==h==LOW){//For N
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && g==HIGH && c==d==e==f==b==h==LOW){//For O
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && h==HIGH && c==d==e==f==g==b==LOW){//For P
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && b==HIGH && c==HIGH && d==e==f==g==h==LOW){//For Q
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && d==HIGH && c==e==f==g==h==LOW){//For R
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && e==HIGH && d==c==f==g==h==LOW){//For s
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && f==HIGH && d==e==c==g==h==LOW){//For T
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && g==HIGH && d==e==f==c==h==LOW){//For U
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && h==HIGH && d==e==f==g==c==LOW){//For V
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
     digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && c==HIGH && d==HIGH && e==f==g==h==LOW){//For W
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
     digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
    if(a==HIGH && b==HIGH && c==HIGH && e==HIGH && d==f==g==h==LOW){//For X
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
     digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    }
    if(a==HIGH && b==HIGH && c==HIGH && f==HIGH && e==d==g==h==LOW){//For Y
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }

    if(a==HIGH && b==HIGH && c==HIGH && g==HIGH && e==f==d==h==LOW){//For Z
    digitalWrite(led3, HIGH);
    delay(dl2);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led2, HIGH);
    delay(dl);
    digitalWrite(led2, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led, HIGH);
    delay(dl);
    digitalWrite(led, LOW);
    delay(dl);
    digitalWrite(led3, LOW);
    delay(dl2);
    
    }
   }
    
    
}
