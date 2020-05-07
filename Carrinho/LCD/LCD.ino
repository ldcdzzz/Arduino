#include <LiquidCrystal.h>
#define incrementa 0
#define decrementa 1
int contador=0;
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);  
                                    

void setup() {
pinMode(incrementa,INPUT);
pinMode(decrementa,INPUT);
lcd.begin(16,2);  
lcd.print("CONTADOR => ");   
lcd.print(contador);
delay(200);
}

void loop() { 
if(digitalRead(incrementa)==0){
  lcd.clear();                   
  contador++;
  lcd.print("CONTADOR => ");   
  lcd.print(contador);
  delay(250);
} 
if(digitalRead(decrementa)==0){
  lcd.clear();                   
  contador--;
  lcd.print("CONTADOR => ");   
  lcd.print(contador);
  delay(250);
} 
}

