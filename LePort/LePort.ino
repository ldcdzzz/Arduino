int leitura;

void setup() {                
 DDRD=0b11111111; //pinModeD 0b=binario 1=saída//
 DDRC=0b000000;   //pinModeC 0=entrada//
}
void loop() {
 leitura=PINC; //digitalReadC//
  switch (leitura){
    
 case 0b111111 : //digitalReadC = 111111//
 PORTD=0b11111111; //digitalWriteD//
 break;
 
 case 0b011110 :
 PORTD=0b00001111;
 break;
 
 case 0b100001 :
 PORTD=0b11110000;
 break;
 
 default: //qualquer outro case//
 PORTD=0b00000000;
 break;
}
}
       


