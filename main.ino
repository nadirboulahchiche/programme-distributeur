#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8,7);
long ms; long uneseconde=0;   // DECLARATION SECONDE
int s=0; int gtm=0;//
int m=0;int gth=0;//==>aincraimentation clock
         int h=0;//
char bar=124;  char cur=62;//la bar et cursor
int col=1; int col2=1;  // colonne (s,m,h)
int hr=0;  int hr2=0;//aincraimentation reglage clock
char menu=0;
int reglag=0;
int lign1=0;
int a1=0;int b1=0;int c1=0;int s1=0; int a2=0;int b2=0;int c2=0;int s2=0;int a3=0;int b3=0;int c3=0;int s3=0; int a4=0;int b4=0;int c4=0;int s4=0;
int dis=0; int fois=0;int d=0;
int t1=0; int t2=0; int t3=0; int t4=0;
int hh = 1, cc;


    void LCD(){  lcd.clear();lcd.setCursor(1,0);lcd.print("TIME:");lcd.setCursor(6,0);lcd.print(h);lcd.setCursor(8,0);lcd.print(":");
            lcd.setCursor(9,0);lcd.print(m);lcd.setCursor(11,0);lcd.print(":");lcd.setCursor(12,0);lcd.print(s);} 

    /* void LCDI(int i){    
    *  lcd.clear();lcd.setCursor(1,0); lcd.print(">TIME :");lcd.setCursor(6,0); lcd.print(dis);lcd.setCursor(8,0);lcd.print(a(i));
     lcd.setCursor(10,0);lcd.print(":");lcd.setCursor(11,0); lcd.print(b(i));lcd.setCursor(13,0);lcd.print(":");lcd.setCursor(14,0); lcd.print(s(i);
     lcd.setCursor(3,1); lcd.print("CONTITI:");lcd.print(c(i));}   
    
    */
    void LCD1(){lcd.clear();lcd.setCursor(1,0); lcd.print(">TIME :");lcd.setCursor(6,0); lcd.print(dis);lcd.setCursor(8,0);lcd.print(a1);
     lcd.setCursor(10,0);lcd.print(":");lcd.setCursor(11,0); lcd.print(b1);lcd.setCursor(13,0);lcd.print(":");lcd.setCursor(14,0); lcd.print(s1);
     lcd.setCursor(3,1); lcd.print("CONTITI:");lcd.print(c1);}

    void LCD2(){lcd.clear();lcd.setCursor(1,0); lcd.print(">TIME :");lcd.setCursor(6,0); lcd.print(dis);lcd.setCursor(8,0);lcd.print(a2);
     lcd.setCursor(10,0);lcd.print(":");lcd.setCursor(11,0); lcd.print(b2);lcd.setCursor(13,0);lcd.print(":");lcd.setCursor(14,0); lcd.print(s2);
     lcd.setCursor(3,1); lcd.print("CONTITI:");lcd.print(c2);}
     
    void LCD3(){lcd.clear();lcd.setCursor(1,0); lcd.print(">TIME :");lcd.setCursor(6,0); lcd.print(dis);lcd.setCursor(8,0);lcd.print(a3);
    lcd.setCursor(10,0);lcd.print(":");lcd.setCursor(11,0); lcd.print(b3);lcd.setCursor(13,0);lcd.print(":");lcd.setCursor(14,0); lcd.print(s3);
    lcd.setCursor(3,1); lcd.print("CONTITI:");lcd.print(c3);}
      
    void LCD4(){lcd.clear();lcd.setCursor(1,0); lcd.print(">TIME :");lcd.setCursor(6,0); lcd.print(dis);lcd.setCursor(8,0);lcd.print(a4);
    lcd.setCursor(10,0);lcd.print(":");lcd.setCursor(11,0); lcd.print(b4);lcd.setCursor(13,0);lcd.print(":");lcd.setCursor(14,0); lcd.print(s4);
    lcd.setCursor(3,1); lcd.print("CONTITI:");lcd.print(c4);}  
     
void dist1(){  
  if(digitalRead(A1)==0&&col2==1){dis=1;LCD1();delay(500); col2++;hr2=1;lcd.setCursor(8,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==1){LCD1();delay(500);a1++;if(a1>23){a1=0;}}
  
  if(digitalRead(A1)==0&&col2==2){LCD1();delay(500); col2++;hr2=2;lcd.setCursor(11,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==2){LCD1();delay(500);b1++;if(b1>59){b1=0;}}

  if(digitalRead(A1)==0&&col2==3){LCD1();delay(500); col2++;hr2=3;lcd.setCursor(14,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==3){LCD1();delay(500);s1++;if(s1>59){s1=0;}}

  if(digitalRead(A1)==0&&col2==4){LCD1();delay(500);col2++;hr2=4;lcd.setCursor(11,1);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==4){LCD1();delay(500);c1++;if(c1>5){c1=0;}}
 
  }
   
void dist2(){   
  if(digitalRead(A1)==0&&col2==5){dis=2;LCD2();delay(500);
  col2++;hr2=5;lcd.setCursor(8,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==5){LCD2();delay(500);a2++;if(a2>23){a2=0;}}
  
  if(digitalRead(A1)==0&&col2==6){LCD2();delay(500);
  col2++;hr2=6;lcd.setCursor(11,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==6){LCD2();delay(500);b2++;if(b2>59){b2=0;}}

  if(digitalRead(A1)==0&&col2==7){LCD2();delay(500);
  col2++;hr2=7;lcd.setCursor(14,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==7){LCD2();delay(500);s2++;if(s2>59){s2=0;}}

  if(digitalRead(A1)==0&&col2==8){LCD2();delay(500);
  col2++;hr2=8;lcd.setCursor(11,1);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==8){LCD2();delay(500);c2++;if(c2>5){c2=0;}}}
void dist3(){
  if(digitalRead(A1)==0&&col2==9){dis=3;LCD3();delay(500);
  col2++;hr2=9;lcd.setCursor(8,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==9){LCD3();delay(500);a3++;if(a3>23){a3=0;}}
  
  if(digitalRead(A1)==0&&col2==10){LCD3();delay(500);
  col2++;hr2=10;lcd.setCursor(11,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==10){LCD3();delay(500);b3++;if(b3>59){b3=0;}}

  if(digitalRead(A1)==0&&col2==11){LCD3();delay(500);
  col2++;hr2=11;lcd.setCursor(14,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==11){LCD3();delay(500);s3++;if(s3>59){s3=0;}}

  if(digitalRead(A1)==0&&col2==12){LCD3();delay(500);
  col2++;hr2=12;lcd.setCursor(11,1);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==12){LCD3();delay(500);c3++;if(c3>5){c3=0;}}}
void dist4(){
  if(digitalRead(A1)==0&&col2==13){dis=4;LCD4();delay(500);
  col2++;hr2=13;lcd.setCursor(8,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==13){LCD4();delay(500);a4++;if(a4>23){a4=0;}}
  
  if(digitalRead(A1)==0&&col2==14){LCD4();delay(500);
  col2++;hr2=14;lcd.setCursor(11,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==14){LCD4();delay(500);b4++;if(b4>59){b4=0;}}

  if(digitalRead(A1)==0&&col2==15){LCD4();delay(500);
  col2++;hr2=15;lcd.setCursor(14,0);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==15){LCD4();delay(500);s4++;if(s4>59){s4=0;}}

  if(digitalRead(A1)==0&&col2==16){LCD4();delay(500);
  col2++;hr2=16;lcd.setCursor(11,1);lcd.print(bar);}
  if(digitalRead(A0)==0&&hr2==16){LCD4();delay(500);c4++;if(c4>5){c4=0;}}}

void setup() {
  lcd.begin(16,2); 
   pinMode(A0,INPUT_PULLUP);
   pinMode(A1,INPUT_PULLUP);
   pinMode(A2,INPUT_PULLUP);
   pinMode(6,1); 
   pinMode(5,1);
   pinMode(0,0);

    digitalWrite(6,1);
   

   
   }
void loop() {
  
   if(digitalRead(0)==0){digitalWrite(6,0);}
                                                         
  switch(menu){                                                 //PAGE 1(HEURE)
case 0:

menu0:   ms=millis();                                              //seconde
  if(ms-uneseconde>1000){ LCD(); s++;lcd.setCursor(12,0);lcd.print(s);uneseconde=ms;  if(s>59){s=0;gtm=1;}}
                                                       //minute
  if(gtm==1){LCD();m++;lcd.setCursor(9,0);lcd.print(m);gtm--;  if(m>59){m=0;gth=1;}}
                                                       //heure
  if(gth==1){LCD();h++;lcd.setCursor(6,0);lcd.print(h);gth--;  if(h>22){h=0;}}  
  if(digitalRead(A1)==0){delay(200);menu=1;}
  

                                                              //DISTRUBUTION
if(h==a1&&m==b1&&s==s1){
  for(int  ds=1; ds<c1; ds++) {
      long cmt = 0;
      digitalWrite(6,1);
      
      while(digitalRead(0)!=0){}
      
      digitalWrite(6,0);
      while(cmt < 1000000){ 
        cmt++;
             ms=millis();  
             if(ms-uneseconde>1000){ LCD(); s++;lcd.setCursor(12,0);lcd.print(s);uneseconde=ms;  if(s>59){s=0;gtm=1;}}//seconde
      }}}

      if(h==a2&&m==b2&&s==s2){
  for(int  ds=1; ds<c2; ds++) {
      long cmt = 0;
      digitalWrite(6,1);
      
      while(digitalRead(0)!=0){}
      
      digitalWrite(6,0);
      while(cmt < 1000000){ 
        cmt++;
             ms=millis();  
             if(ms-uneseconde>1000){ LCD(); s++;lcd.setCursor(12,0);lcd.print(s);uneseconde=ms;  if(s>59){s=0;gtm=1;}}//seconde
      }}}

      if(h==a3&&m==b3&&s==s3){
  for(int  ds=1; ds<c3; ds++) {
      long cmt = 0;
      digitalWrite(6,1);
      
      while(digitalRead(0)!=0){}
      
      digitalWrite(6,0);
      while(cmt < 1000000){ 
        cmt++;
             ms=millis();  
             if(ms-uneseconde>1000){ LCD(); s++;lcd.setCursor(12,0);lcd.print(s);uneseconde=ms;  if(s>59){s=0;gtm=1;}}//seconde
      }}}

      if(h==a4&&m==b4&&s==s4){
  for(int  ds=1; ds<c4; ds++) {
      long cmt = 0;
      digitalWrite(6,1);
      
      while(digitalRead(0)!=0){}
      
      digitalWrite(6,0);
      while(cmt < 1000000){ 
        cmt++;
             ms=millis();  
             if(ms-uneseconde>1000){ LCD(); s++;lcd.setCursor(12,0);lcd.print(s);uneseconde=ms;  if(s>59){s=0;gtm=1;}}//seconde
      }}}

 break;
                                                     // PAGE2 (MENU REGLAGE)
case 1:

  lcd.setCursor(1,0);lcd.print("REGLAG HEURE ");lcd.setCursor(1,1);lcd.print("DISTRIBUTION");
  if(digitalRead(A0)==0&&lign1==0){delay(500);
  lcd.clear();lcd.setCursor(0,0);lcd.print(cur);lcd.setCursor(1,0);lcd.print("REGLAG HEURE"); lcd.setCursor(1,1);lcd.print("DISTRIBUTION");lign1++;}
                                         
  if(digitalRead(A0)==0&&lign1==1){delay(500);
  lcd.clear();lcd.setCursor(0,1);lcd.print(cur);lcd.setCursor(1,1);lcd.print("DISTRIBUTION");lcd.setCursor(1,0);lcd.print("REGLAG HEURE");lign1++;}
  if(lign1>1){lign1=0;}
  if(digitalRead(A1)==0&&lign1==1){delay(500);menu=2;}
  if(digitalRead(A1)==0&&lign1==0){delay(500);menu=3;d=1;}
  if(digitalRead(A2)==0){menu=0;goto menu0;}
     break;
                                                   //PAGE3(REGLAGE HEURE)
      
case 2:

   if(digitalRead(A1)==0&&col==1){LCD();delay(500);  col++;hr=1;lcd.setCursor(6,0);lcd.print(bar);} 
   if(digitalRead(A0)==0&&hr==1){LCD();delay(500);h++;lcd.setCursor(6,0);lcd.print(h);if(h>22){h=0;}}
                                                  // reglag minute
   if(digitalRead(A1)==0&&col==2){LCD();delay(500);  col++;hr=2;lcd.setCursor(9,0);lcd.print(bar);} 
   if(digitalRead(A0)==0&&hr==2){LCD();delay(500);m++;lcd.setCursor(9,0);lcd.print(m);if(m>59){m=0;}}
                                                // reglag seconde
   if(digitalRead(A1)==0&&col==3){LCD();delay(500); col++;hr=3;lcd.setCursor(12,0);lcd.print(bar);} 
   if(digitalRead(A0)==0&&hr==3){LCD();delay(500);s++;lcd.setCursor(12,0);lcd.print(s);if(s>59){s=0;}}
    
   if(digitalRead(A1)==0&&col>3){col=1;}
   if(digitalRead(A2)==0){ menu=0;goto menu0;}
      break;
                                               // PAGE4(REGLAGE DISTRUBUTION)
case 3:

 if (digitalRead(A1)==0&&d==1){delay(500);
 lcd.clear();lcd.setCursor(0,0);lcd.print(cur);lcd.setCursor(2,0);lcd.print(fois);lcd.setCursor(4,0);lcd.print("FOIS");}
 
 if (digitalRead(A0)==0&&hr2==0){delay(500);fois++;lcd.setCursor(0,0);lcd.print(cur);lcd.setCursor(2,0);lcd.print(fois);lcd.setCursor(4,0);
 lcd.print("FOIS");}
 if (fois>4) {fois=0;}
 if(digitalRead(A2)==0){menu=0;fois=0;lign1==0;hr2=0;goto menu0;}
switch(fois){ 
case 1: d=0;
   dist1();
   if(col2>4){col2=1;}
  
break;
case 2: 
  dist1(); dist2(); d=0;
  if(col2>8){col2=1;}
   
break; 
case 3:
  dist1(); dist2(); dist3(); d=0;
  if(col2>12){col2=1;}
  
break;
case 4:
  dist1(); dist2(); dist3(); dist4(); d=0;                                          
  if(col2>16){col2=1;}
break;}
break;}
   }
