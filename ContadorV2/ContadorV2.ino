#define segA 7
#define segB 6
#define segC 5
#define segD 4
#define segE 3
#define segF 2
#define segG 1
#define segPD 0
#define bzz 13
int ldr;
int contador=0;

void setup() {                
  pinMode(segA,OUTPUT);
  pinMode(segB,OUTPUT);
  pinMode(segC,OUTPUT);
  pinMode(segD,OUTPUT);
  pinMode(segE,OUTPUT);
  pinMode(segF,OUTPUT);
  pinMode(segG,OUTPUT);
  pinMode(segPD,OUTPUT);
  pinMode(bzz,OUTPUT);
  atualiza();
}
void loop() {
  ldr=analogRead(A0);
  if (ldr<300){
    contador++;
    atualiza();
    digitalWrite(bzz,1);
    delay(150);
    digitalWrite(bzz,0);
    delay(150);
  }
}

void atualiza(){
  if (contador==0) zero();
  if (contador==1) um();
  if (contador==2) dois();
  if (contador==3) tres();
  if (contador==4) quatro();
  if (contador==5) cinco();
  if (contador==6) seis();
  if (contador==7) sete();
  if (contador==8) oito();
  if (contador==9) nove();
}

void zero(){
   digitalWrite(segA, 1); //Num 0
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 1);
   digitalWrite(segE, 1);
   digitalWrite(segF, 1);
   digitalWrite(segG, 0);
   digitalWrite(segPD, 0);
   delay(300);
}

void um(){
   digitalWrite(segA, 0); //Num 1
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 0);
   digitalWrite(segE, 0);
   digitalWrite(segF, 0);
   digitalWrite(segG, 0);
   digitalWrite(segPD, 0);
   delay(300);
}

void dois(){
   digitalWrite(segA, 1); //Num 2
   digitalWrite(segB, 1);
   digitalWrite(segC, 0);
   digitalWrite(segD, 1);
   digitalWrite(segE, 1);
   digitalWrite(segF, 0);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);
}

void tres(){
   digitalWrite(segA, 1); //Num 3 
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 1);
   digitalWrite(segE, 0);
   digitalWrite(segF, 0);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);  
}

void quatro(){
   digitalWrite(segA, 0); //Num 4
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 0);
   digitalWrite(segE, 0);
   digitalWrite(segF, 1);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);  
}

void cinco(){
   digitalWrite(segA, 1); //Num 5
   digitalWrite(segB, 0);
   digitalWrite(segC, 1);
   digitalWrite(segD, 1);
   digitalWrite(segE, 0);
   digitalWrite(segF, 1);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);  
}

void seis(){
   digitalWrite(segA, 1); //Num 6
   digitalWrite(segB, 0);
   digitalWrite(segC, 1);
   digitalWrite(segD, 1);
   digitalWrite(segE, 1);
   digitalWrite(segF, 1);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);  
}

void sete(){
   digitalWrite(segA, 1); //Num 7
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 0);
   digitalWrite(segE, 0);
   digitalWrite(segF, 0);
   digitalWrite(segG, 0);
   digitalWrite(segPD, 0);
   delay(300);  
}

void oito(){
   digitalWrite(segA, 1); //Num 8
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 1);
   digitalWrite(segE, 1);
   digitalWrite(segF, 1);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);  
}

void nove(){
   digitalWrite(segA, 1); //Num 9
   digitalWrite(segB, 1);
   digitalWrite(segC, 1);
   digitalWrite(segD, 1);
   digitalWrite(segE, 0);
   digitalWrite(segF, 1);
   digitalWrite(segG, 1);
   digitalWrite(segPD, 0);
   delay(300);  
}
