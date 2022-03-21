int aa;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()>0){
      aa=Serial.read();
      Serial.print(aa); // input display 
    }
    
    if(aa==65 || aa==97){//for A
    digitalWrite(13, HIGH);
    aa=0;
    }

    if(aa==66 || aa==98){//For B
    digitalWrite(12, HIGH);
    aa=0;
    }
    
    if(aa==67 || aa==99){//For C
    digitalWrite(11, HIGH);
    aa=0;
    }
    
    if(aa==68 || aa==100){//For D
    digitalWrite(10, HIGH);
    aa=0;
    }
    
    if(aa==69 || aa==101){//For E
    digitalWrite(9, HIGH);
    aa=0;
    }

    if(aa==70 || aa==102){//For F
    digitalWrite(8, HIGH);
    aa=0;
    }

    if(aa==71 || aa==103){//For G
    digitalWrite(7, HIGH);
    aa=0;
    }
    if(aa==72 || aa==104){//For H
    digitalWrite(6, HIGH);
    aa=0;
    }
    if(aa==73 || aa==105){//For I
    digitalWrite(5, HIGH);
    aa=0;
    }
     if(aa==74 || aa==106){//For J
    digitalWrite(4, HIGH);
    aa=0;
    }
    if(aa==75 || aa==107){//For K
    digitalWrite(3, HIGH);
    aa=0;
    }
    if(aa==76 || aa==108){//For L
    digitalWrite(2, HIGH);
    aa=0;
    }
    
    if(aa==77 || aa==109){//For M
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    aa=0;
    }
    if(aa==78 || aa==110){//For N
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    aa=0;
    }
    if(aa==79 || aa==111){//For O
    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);
    aa=0;
    }
    if(aa==80 || aa==112){//For P
    digitalWrite(13, HIGH);
    digitalWrite(9, HIGH);
    aa=0;
    }
    if(aa==81 || aa==113){//For Q
    digitalWrite(13, HIGH);
    digitalWrite(8, HIGH);
    aa=0;
    }

    if(aa==82 || aa==114){//For R
    digitalWrite(13, HIGH);
    digitalWrite(7, HIGH);
    aa=0;
    }

    if(aa==83 || aa==115){//For s
    digitalWrite(13, HIGH);
    digitalWrite(6, HIGH);
    aa=0;
    }

    if(aa==84 || aa==116){//For T
    digitalWrite(13, HIGH);
    digitalWrite(5, HIGH);
    aa=0;
    }

    if(aa==85 || aa==117){//For U
    digitalWrite(13, HIGH);
    digitalWrite(4, HIGH);
    aa=0;
    }

    if(aa==86 || aa==118){//For V
    digitalWrite(13, HIGH);
    digitalWrite(3, HIGH);
    aa=0;
    }

    if(aa==87 || aa==119){//For W
    digitalWrite(13, HIGH);
    digitalWrite(2, HIGH);
    aa=0;
    }
    if(aa==88 || aa==120){//For X
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    aa=0;
    }
    if(aa==89 || aa==121){//For Y
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    aa=0;
    }

    if(aa==90 || aa==122){//For Z
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    aa=0;
    } 
}
