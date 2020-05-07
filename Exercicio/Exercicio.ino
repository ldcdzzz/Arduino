#include <LiquidCrystal.h>
#define esteira 1
#define sensor 0
#define m 13
int garrafas=0;
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);                 
void setup() {
pinMode(esteira,INPUT);
pinMode(sensor,INPUT);
pinMode(m,OUTPUT);
lcd.begin(16,2);
lcd.setCursor(3,0);  
lcd.print("LIGUE A");
lcd.setCursor(3,1);  
lcd.print("ESTEIRA");   
}
void loop() { 
  if(digitalRead(esteira)==0 && garrafas<12 ){
  digitalWrite(m,1);
  lcd.clear();
  lcd.setCursor(3,0);  
  lcd.print("ESTEIRA ON");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);  
  lcd.print("GARRAFAS => ");
  lcd.print(garrafas);
} 
if(digitalRead(sensor)==0 ){  
  garrafas++;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("GARRAFAS => ");   
  lcd.print(garrafas);
  delay(200);
}
if(garrafas==12){
  digitalWrite(m,0);
  lcd.clear();
  lcd.setCursor(3,0);  
  lcd.print("ESTEIRA Off");
  delay(2000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TROQUE A");
  lcd.setCursor(3,1);
  lcd.print("CAIXA");
  delay(2000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("10s");
  lcd.clear();
  delay(1000);
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("9s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("8s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("7s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("6s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("5s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("4s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("3s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("2s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("1s");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("TEMPO");
  lcd.setCursor(4,1);
  lcd.print("0s");
  delay(1000);
  garrafas==0;
}
}
