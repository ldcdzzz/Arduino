int vermelho=8;
int verde=10;
int amarelo=6;
char leitura;
void setup() {
  Serial.begin(9600);
  pinMode(vermelho,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  Serial.println("digite uma tecla");
}
void loop() {
  if(Serial.available()>0){
  leitura=Serial.read();
  Serial.print("Tecla digitada => ");
  Serial.println(leitura);  
  
  if(leitura=='R'){
    digitalWrite(vermelho,1);
  }
  if(leitura=='r'){
    digitalWrite(vermelho,0);
  }
  if(leitura=='G'){
    digitalWrite(verde,1);
  }
  if(leitura=='g'){
    digitalWrite(verde,0);
  }
  if(leitura=='Y'){
    digitalWrite(amarelo,1);
  }
  if(leitura=='y'){
    digitalWrite(amarelo,0);
  }
  if(leitura=='A' || leitura== 'a'){
    digitalWrite(vermelho,1);
    digitalWrite(verde,1);
    digitalWrite(amarelo,1);
  }
  if(leitura=='C' || leitura== 'c'){
    digitalWrite(vermelho,0);
    digitalWrite(verde,0);
    digitalWrite(amarelo,0);
  }
  }
}
