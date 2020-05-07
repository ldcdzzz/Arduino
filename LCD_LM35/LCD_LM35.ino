#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);  
float valorlido; //Float=decimais      
#define r 13
#define y 12
#define g 11                             
#define b 10

void setup() {
pinMode(r, OUTPUT);
pinMode(y, OUTPUT);
pinMode(g, OUTPUT);
pinMode(b, OUTPUT); 
lcd.begin(16,2);
analogReference(INTERNAL); // Referencia de 1.1V UNO (1.1/1024=0,913mv) 0,913mv de precisão ou seja 0,09ºC( INTERNAL1V1  Arduino Mega)
lcd.setCursor(3,0);  
lcd.print("SENSOR DE");   
lcd.setCursor(2,1);  
lcd.print("TEMPERATURA");
delay(3000); 
}

void loop() { 
   valorlido=0;
   for(int i=0;i<100;i++){
   valorlido=valorlido+analogRead(A0);
}
 valorlido=valorlido/100; //Media de cem leituras
 valorlido=valorlido*(1.1/1024);//Converte valor lido para tensão
 valorlido=valorlido*100;//Converte para Graus = temperatura/(1C/10mv)
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("TEMPERATURA"); 
  lcd.setCursor(5,1);  
  lcd.print(valorlido);
  lcd.print(" C");
  delay(250);
  if(valorlido < 31){
    digitalWrite(g,1);
    digitalWrite(y,0);
    digitalWrite(r,0);
    digitalWrite(b,0);
  }
  if(valorlido >= 32 && valorlido <= 33){
    digitalWrite(g,0);
    digitalWrite(y,1);
    digitalWrite(r,0);
    digitalWrite(b,0);
  }
  if(valorlido > 34){
    digitalWrite(g,0);
    digitalWrite(y,0);
    digitalWrite(r,1);
    digitalWrite(b,1);
    delay(100);
    digitalWrite(b,0);
    delay(100);
  }
  
 
} 
