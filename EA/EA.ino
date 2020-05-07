 int ldr=0;
 #define gre 7
 #define red 8

void setup() {
  Serial.begin(9600);   
  pinMode(gre,OUTPUT);
  pinMode(red,OUTPUT);
  
}

void loop() {
  ldr=analogRead(A0);
  Serial.print("Valor lido => ");
  Serial.println(ldr);
  
    //digitalWrite (gre,1);//
    //digitalWrite (red,0);//
   // delay(pot); // 
   // digitalWrite (red,1);//
   // digitalWrite (gre,0);//
   // delay(pot);//
  
}
