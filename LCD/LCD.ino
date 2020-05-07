#include <LiquidCrystal.h>
#define incrementa 0
#define decrementa 1
int contador=0;
LiquidCrystal lcd(8, 9, 5, 4, 3, 2);  
                                    

void setup() {
pinMode(incrementa,INPUT);
pinMode(decrementa,INPUT);
lcd.begin(16,2);
lcd.setCursor(2,0);  
lcd.print("CONTADOR=> ");   
lcd.print(contador);
delay(200);
}

void loop() { 
if(digitalRead(incrementa)==0 && contador<15){
  lcd.clear();                   
  contador++;
  lcd.setCursor(2,0);
  lcd.print("CONTADOR=> ");   
  lcd.print(contador);
  delay(250);
} 
if(digitalRead(decrementa)==0 && contador>0){
  lcd.clear();                   
  contador--;
  lcd.setCursor(2,1);
  lcd.print("CONTADOR=> ");   
  lcd.print(contador);
  delay(250);
} 
}
