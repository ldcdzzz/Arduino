int m=8;
int l1=5;
int l2=6;
int li=10;
int dl=12;
void setup() {                
pinMode(m,OUTPUT);
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(li,INPUT);
pinMode(dl,INPUT);
digitalWrite(l1,1);
digitalWrite(l2,0);
}
void loop() {
if(digitalRead(li)==0){
digitalWrite(m,1);
digitalWrite(l1,1);
digitalWrite(l2,0);
delay (15000);
digitalWrite(m,0);
digitalWrite(l1,0);
digitalWrite(l2,1);
}
}
