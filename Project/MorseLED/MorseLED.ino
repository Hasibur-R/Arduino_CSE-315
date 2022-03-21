//global variable
int led=8;   //dot status LED
int led2=2;  //dash status LED
int led3=13; //Active status LED
int dl=600;  //delay for dot-dash
int dl2=750; //delay for active status
int aa;

void low(int pinNo){ //function for LOW 
  digitalWrite(pinNo,LOW);
  }
void high(int pinNo){ //function for HIGH
  digitalWrite(pinNo,HIGH);
  }

void setup() { //setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT); //output for DOT
  pinMode(led2,OUTPUT); //output for DASH
  pinMode(led3,OUTPUT); //output for active status
  Serial.print("Enter Your word or alphabet:");
  Serial.println();
  }

void loop() { //main code here, to run repeatedly:
    if(Serial.available()>0){
      aa=Serial.read(); // input display 
    }
    
    if(aa==65 || aa==97){//code for A
    if(aa==65){Serial.print('A');}
    else{Serial.print('a');}
    high(led3); delay(dl2);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led2); delay(dl);  low(led2);  delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    
    if(aa==66 || aa==98){//code for B
    if(aa==66){Serial.print('B');}
    else{Serial.print('b');}
    high(led3); delay(dl2);
    high(led2); delay(dl);  low(led2);  delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    
    if(aa==67 || aa==99){//For C 
    if(aa==66){Serial.print('C');}
    else{Serial.print('c');}
    high(led3); delay(dl2);
    high(led2); delay(dl);  low(led2);  delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led2); delay(dl);  low(led2);  delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    
    if(aa==68 || aa==100){//For D
    if(aa==66){Serial.print('D');}
    else{Serial.print('d');}
    high(led3); delay(dl2);
    high(led2); delay(dl);  low(led2);  delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    
    if(aa==69 || aa==101){//For E
    if(aa==66){Serial.print('E');}
    else{Serial.print('e');}
    high(led3); delay(dl2);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==70 || aa==102){//For F
    if(aa==70){Serial.print('F');}
    else{Serial.print('f');}
    high(led3); delay(dl2);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led2); delay(dl);  low(led2);  delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==71 || aa==103){//For G
    if(aa==71){Serial.print('G');}
    else{Serial.print('g');}
    high(led3); delay(dl2);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==72 || aa==104){//For H
    if(aa==72){Serial.print('H');}
    else{Serial.print('h');}
    high(led3); delay(dl2);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==73 || aa==105){//For I
    if(aa==73){Serial.print('I');}
    else{Serial.print('i');}
    high(led3); delay(dl2);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    
    if(aa==74 || aa==106){//For J
    if(aa==74){Serial.print('J');}
    else{Serial.print('j');}
    high(led3);  delay(dl2);
    high(led);   delay(dl); low(led);    delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    low(led3);   delay(dl2); aa=0;
    }
    
    if(aa==75 || aa==107){//For K
    if(aa==75){Serial.print('K');}
    else{Serial.print('k');}
    high(led3);  delay(dl2);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led);   delay(dl);  low(led);   delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    low(led3);   delay(dl2); aa=0;
    }
    
    if(aa==76 || aa==108){//For L
    if(aa==76){Serial.print('L');}
    else{Serial.print('l');}
    high(led3);  delay(dl2);
    high(led);   delay(dl); low(led);    delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led);   delay(dl); low(led);    delay(dl);
    high(led);   delay(dl); low(led);    delay(dl);
    low(led3);   delay(dl2); aa=0;
    }
    
    if(aa==77 || aa==109){//For M
    if(aa==77){Serial.print('M');}
    else{Serial.print('m');}
    high(led3);  delay(dl2);
    high(led2);  delay(dl);  low(led2);  delay(dl);
    high(led2);   delay(dl);  low(led2);   delay(dl);
    low(led3);   delay(dl2); aa=0;
    }
    if(aa==78 || aa==110){//For N
    if(aa==78){Serial.print('N');}
    else{Serial.print('n');}
    high(led3); delay(dl2);
    high(led2);  delay(dl);  low(led2);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==79 || aa==111){//For O
    if(aa==79){Serial.print('O');}
    else{Serial.print('o');}
    high(led3); delay(dl2);
    high(led2);  delay(dl); low(led2);   delay(dl);
    high(led2);  delay(dl);  low(led2);   delay(dl);
    high(led2);  delay(dl); low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==80 || aa==112){//For P
    if(aa==80){Serial.print('P');}
    else{Serial.print('p');}
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==81 || aa==113){//For Q
    if(aa==81){Serial.print('Q');}
    else{Serial.print('q');}
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==82 || aa==114){//For R
    if(aa==82){Serial.print('R');}
    else{Serial.print('r');}
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==83 || aa==115){//For S
    if(aa==83){Serial.print('S');}
    else{Serial.print('s');}
    high(led3); delay(dl2);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    high(led);  delay(dl);  low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==84 || aa==116){//For T
    if(aa==84){Serial.print('T');}
    else{Serial.print('t');}
    high(led3);  delay(dl2);
    high(led2);  delay(dl);  low(led2);   delay(dl);
    low(led3);   delay(dl2); aa=0;
    }

    if(aa==85 || aa==117){//For U
    if(aa==85){Serial.print('U');}
    else{Serial.print('u');}
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==86 || aa==118){//For V
    if(aa==86){Serial.print('V');}
    else{Serial.print('v');}
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==87 || aa==119){//For W
    if(aa==87){Serial.print('W');}
    else{Serial.print('w');}
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==88 || aa==120){//For X
    if(aa==88){Serial.print('X');}
    else{Serial.print('x');}
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==89 || aa==121){//For Y
    if(aa==89){Serial.print('Y');}
    else{Serial.print('y');}
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }   

    if(aa==90 || aa==122){//For Z
    if(aa==90){Serial.print('Z');}
    else{Serial.print('z');}
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==32){
    Serial.print(' ');  aa=0;
    }
    if(aa==48){//For 0
    Serial.print('0');
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
     if(aa==49){//For 1
    Serial.print('1');
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==50){//For 2
    Serial.print('2');
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==51){//For 3
    Serial.print('3');
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==52){//For 4
    Serial.print('4');
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    
    if(aa==53){//For 5
    Serial.print('5');
    high(led3); delay(dl2);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==54){//For 6
    Serial.print('6');
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
    if(aa==55){//For 7
    Serial.print('7');
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==56){//For 8
    Serial.print('8');
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led3);  delay(dl2); aa=0;
    }

    if(aa==57){//For 9
    Serial.print('9');
    high(led3); delay(dl2);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led2);  delay(dl);low(led2);   delay(dl);
    high(led);  delay(dl);low(led);   delay(dl);
    low(led); delay(dl);
    low(led3);  delay(dl2); aa=0;
    }
}
