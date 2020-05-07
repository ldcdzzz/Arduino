#include <EEPROM.h>

#define pinA 7
#define pinB 6
#define pinC 5
#define pinD 4
#define pinE 3
#define pinF 2
#define pinG 1
#define pinPD 0
#define incrementa 11
#define decrementa 9
#define zerar 13
int contador;

void setup() {                
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinPD,OUTPUT);
  pinMode(incrementa,INPUT);
  pinMode(decrementa,INPUT);
  contador=EEPROM.read(0);
  if(contador==0xFF) contador=0;
  atualiza();
}
void loop() {
  if (digitalRead(zerar)==0 && contador!=0 ){
    contador = 0;
    EEPROM.write(0,contador);
    atualiza();
  }
  if (digitalRead(incrementa)==0 && contador<9 ){
    contador++;
    EEPROM.write(0,contador);
    atualiza();
  }
  if (digitalRead(decrementa)==0 && contador>0 ){
    contador--;
    EEPROM.write(0,contador);
    atualiza();
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
   digitalWrite(pinA, 1); //Num 0
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 1);
   digitalWrite(pinE, 1);
   digitalWrite(pinF, 1);
   digitalWrite(pinG, 0);
   digitalWrite(pinPD, 0);
   delay(250);
}

void um(){
   digitalWrite(pinA, 0); //Num 1
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 0);
   digitalWrite(pinE, 0);
   digitalWrite(pinF, 0);
   digitalWrite(pinG, 0);
   digitalWrite(pinPD, 0);
   delay(250);
}

void dois(){
   digitalWrite(pinA, 1); //Num 2
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 0);
   digitalWrite(pinD, 1);
   digitalWrite(pinE, 1);
   digitalWrite(pinF, 0);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);
}

void tres(){
   digitalWrite(pinA, 1); //Num 3 
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 1);
   digitalWrite(pinE, 0);
   digitalWrite(pinF, 0);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);  
}

void quatro(){
   digitalWrite(pinA, 0); //Num 4
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 0);
   digitalWrite(pinE, 0);
   digitalWrite(pinF, 1);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);  
}

void cinco(){
   digitalWrite(pinA, 1); //Num 5
   digitalWrite(pinB, 0);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 1);
   digitalWrite(pinE, 0);
   digitalWrite(pinF, 1);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);  
}

void seis(){
   digitalWrite(pinA, 1); //Num 6
   digitalWrite(pinB, 0);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 1);
   digitalWrite(pinE, 1);
   digitalWrite(pinF, 1);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);  
}

void sete(){
   digitalWrite(pinA, 1); //Num 7
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 0);
   digitalWrite(pinE, 0);
   digitalWrite(pinF, 0);
   digitalWrite(pinG, 0);
   digitalWrite(pinPD, 0);
   delay(250);  
}

void oito(){
   digitalWrite(pinA, 1); //Num 8
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 1);
   digitalWrite(pinE, 1);
   digitalWrite(pinF, 1);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);  
}

void nove(){
   digitalWrite(pinA, 1); //Num 9
   digitalWrite(pinB, 1);
   digitalWrite(pinC, 1);
   digitalWrite(pinD, 0);
   digitalWrite(pinE, 0);
   digitalWrite(pinF, 1);
   digitalWrite(pinG, 1);
   digitalWrite(pinPD, 0);
   delay(250);  
}
