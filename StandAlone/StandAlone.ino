#define r 10 
#define y 8
#define h 14 //14 = A0
#define ah 19 //19 = A5
#define p 16 //16 = A2
#define in1 5
#define in2 6
#define en 7


void setup() {
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);          
  pinMode(en,OUTPUT);
  pinMode(h,INPUT);
  pinMode(ah,INPUT);
  pinMode(p,INPUT);
}

void loop() {
  if(digitalRead(h)== 0){
  digitalWrite(y,0);
  digitalWrite(r,1);
  digitalWrite(en,1);
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  }
  if(digitalRead(ah)== 0){
  digitalWrite(y,1);
  digitalWrite(r,0);
  digitalWrite(en,1);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  }

   if(digitalRead(p)== 0){
   digitalWrite(y,0);
   digitalWrite(r,0);
   digitalWrite(en,0);
   digitalWrite(in1,0);
   digitalWrite(in2,0);
  }
}

