
void setup() {                
 pinMode(0,OUTPUT);
 pinMode(1,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
}

void loop() {
 digitalWrite(0,1);
 digitalWrite(7,1);
 delay(100);
 digitalWrite(6,1);
 digitalWrite(1,1);
 delay(100);
 digitalWrite(5,1);
 digitalWrite(2,1);
 delay(100);
 digitalWrite(4,1);
 digitalWrite(3,1);
 delay(100);
 digitalWrite(4,0);
 digitalWrite(3,0);
 delay(100);
 digitalWrite(2,0);
 digitalWrite(5,0);
 delay(100);
 digitalWrite(1,0);
 digitalWrite(6,0);
 delay(100);
 digitalWrite(7,0);
 digitalWrite(0,0);
 delay(100);
}
