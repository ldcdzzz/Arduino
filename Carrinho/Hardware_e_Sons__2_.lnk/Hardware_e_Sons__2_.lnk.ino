char leitura;
int farol1=A0;
int farol2=A1;
int lanterna1=A4;
int lanterna2=A5;
int bzz=8;
int m1=10;
int m2=11;
int m3=12;
int m4=13;
int in1=7;
int in2=6;
int en1=5;
int en2=4;
int in3=3;
int in4=2;
void setup (){
Serial.begin(9600);  
pinMode (farol1,OUTPUT);
pinMode (farol2,OUTPUT);
pinMode (lanterna1,OUTPUT);
pinMode (lanterna2,OUTPUT);
pinMode (bzz,OUTPUT);
pinMode (in1,OUTPUT);
pinMode (in2,OUTPUT);
pinMode (en1,OUTPUT);
pinMode (in3,OUTPUT);
pinMode (in4,OUTPUT);
pinMode (en2,OUTPUT);
pinMode (m1,OUTPUT);
pinMode (m2,OUTPUT);
pinMode (m3,OUTPUT);
pinMode (m4,OUTPUT);
Serial.println("Digite uma tecla");

}
void loop (){
if(Serial.available()>0){
leitura=Serial.read();
Serial.print("Tecla Digitada => ");
Serial.println(leitura);
switch (leitura) {
case 'W' :
digitalWrite (farol1,1);
digitalWrite (farol2,1);
break;
case 'w' :
digitalWrite (farol1,0);
digitalWrite (farol2,0);
break;
case 'U' :
digitalWrite (lanterna1,1);
digitalWrite (lanterna2,1);
break;
case 'u' :
digitalWrite (lanterna1,0);
digitalWrite (lanterna2,0);
break;
case 'V' :
for (int contador=0; contador <5; contador ++){
digitalWrite (bzz,1);
delay(250);
digitalWrite (bzz,0);
delay(250);
}
break;
case 'X' :
for (int contador=0; contador <5; contador ++){
digitalWrite (farol1,1);
digitalWrite (farol2,1);
digitalWrite (lanterna1,1);
digitalWrite (lanterna2,1);
delay(250);
digitalWrite (farol1,0);
digitalWrite (farol2,0);
digitalWrite (lanterna1,0);
digitalWrite (lanterna2,0);
delay(250);
}
break;
case 'F':
digitalWrite (en1,1);
digitalWrite (in1,1);
digitalWrite (in2,0);
digitalWrite (en2,1);
digitalWrite (in3,1);
digitalWrite (in4,0);
digitalWrite (m1,1);
digitalWrite (m2,0);
digitalWrite (m3,0);
digitalWrite (m4,1);
break;
case 'B':
digitalWrite (en1,1);
digitalWrite (in1,0);
digitalWrite (in2,1);
digitalWrite (en2,1);
digitalWrite (in3,0);
digitalWrite (in4,1);
digitalWrite (m1,0);
digitalWrite (m2,1);
digitalWrite (m3,1);
digitalWrite (m4,0);
break;
case 'S':
digitalWrite (en1,0);
digitalWrite (in1,0);
digitalWrite (in2,0);
digitalWrite (en2,0);
digitalWrite (in3,0);
digitalWrite (in4,0);
digitalWrite (m1,0);
digitalWrite (m2,0);
digitalWrite (m3,0);
digitalWrite (m4,0);
break;
  }
 }
}
