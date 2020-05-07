#define bz 7
#define sensor 8
boolean s;
int contador;

void setup() {
  contador=0;
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(7,OUTPUT);
  digitalWrite(bz,1);
  Serial.print("Valor do contador => ");
  Serial.println(contador);
}

void loop() {
    s=digitalRead(sensor);
if(s==0){
    contador++;
    Serial.print("Valor do contador => ");
    Serial.println(contador);
    delay(200);
      if(contador==10){
        digitalWrite(bz,0);
        delay(100);
        digitalWrite(bz,1);
        contador=0;
      }
   }
}
