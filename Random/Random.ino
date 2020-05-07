const int led=10;
const int bt=3;
int contador;
int aleatorio;
void setup() {
  Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(bt,INPUT);
}
void loop() {
aleatorio=random(0,100);
if(digitalRead(bt)==1){
  Serial.print("Nnumero Sorteado => ");
  Serial.println(aleatorio);
  delay(200);
  }
for(contador;contador>0;contador--){
digitalWrite (led,1);
delay (500);
digitalWrite (led,0);
delay (500);
}
}

