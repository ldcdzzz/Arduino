int tempo=50;
int pot=0;
void setup(){
DDRB=0b111111;
}

void loop (){
pot=analogRead(A0);
if(pot>=800) horario();
if(pot<=400) antihorario();
if(pot>=401 && pot<=799) para();
}

void para (){
PORTB=0b000000;
delay(tempo);
}
void horario(){
PORTB=0b001000;
delay(tempo);
PORTB=0b000100;
delay(tempo);
PORTB=0b000010;
delay(tempo);
PORTB=0b000001;
delay(tempo);
}

void antihorario(){
PORTB=0b000001;
delay(tempo);
PORTB=0b000010;
delay(tempo);
PORTB=0b000100;
delay(tempo);
PORTB=0b001000;
delay(tempo);
}

