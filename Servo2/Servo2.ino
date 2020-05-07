#include <Servo.h>
int BT1=A0;
int BT2=A5;
int i;
Servo motor;

void setup(){
pinMode(BT1,INPUT);
pinMode(BT2,INPUT);
motor.attach(9);
motor.write(0);
}

void loop(){
if(digitalRead(BT1)==0){
  for(i=0;i<180;i++) {
  motor.write(i);
  delay(10);
}
}
if(digitalRead(BT2)==0){
  for(i=180;i>0;i--) {
  motor.write(i);
  delay(10);
}
}
}
