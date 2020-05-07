int leitura;

void setup() {
 DDRD=0b11111111;
 DDRB=0b111111;
 DDRC=0b110000;
}

void loop() {
 leitura=PINC;
 switch (leitura){

  case 0b000011 :
  PORTD=0b01101100;
  PORTB=0b010010;
  break;
  
  case 0b001100 :
  PORTD=0b10101010;
  PORTB=0b100001;
  break;

  case 0b001010 :
  PORTD=0b01101010;
  PORTB=0b100010;
  break;

  case 0b000101 :
  PORTD=0b10101100;
  PORTB=0b010001;
  break;

  default:
  PORTD=0b00000000;
  PORTB=0b000000;
  break;
    
 }
}
