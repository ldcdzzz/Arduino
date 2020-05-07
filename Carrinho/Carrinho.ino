#include <Servo.h>

char leitura;
int farol_1 = A0;
int farol_2 = A1;
int laterna_1 = A4;
int laterna_2 = A5;
int IN4 = 3;
int IN3 = 4;
int EN2 = 2;
int EN1 = 7;
int IN2 = 5;
int IN1 = 6;
int buzzer = 8;
int M1 = 10;
int M2 = 11;
int M3 = 12;
int M4 = 13;

// Define Servo Motor
Servo motor;

void setup (){
  Serial.begin(9600);
  pinMode(farol_1, OUTPUT);
  pinMode(farol_2, OUTPUT);
  pinMode(laterna_1, OUTPUT);
  pinMode(laterna_2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  motor.attach(9);
  Serial.println("Digite uma tecla");
  motor.write(92);
}

void loop (){
  if(Serial.available()>0){
    leitura=Serial.read();
    Serial.print("Tecla Digitada => ");
    Serial.println(leitura);
    switch(leitura){
      case 'W':
        digitalWrite(farol_1, HIGH);
        digitalWrite(farol_2, HIGH);
        break;
      case 'w':
        digitalWrite(farol_1, LOW);
        digitalWrite(farol_2, LOW);
        break;
      case 'U':
        digitalWrite(laterna_1, HIGH);
        digitalWrite(laterna_2, HIGH);
        break;
      case 'u':
        digitalWrite(laterna_1, LOW);
        digitalWrite(laterna_2, LOW);
        break;
      case 'V':
        for(int contador=0; contador<5; contador++){
          digitalWrite(buzzer, HIGH);
          delay(250);
          digitalWrite(buzzer, LOW);
          delay(250);
        }
        break;
      case 'X':
        for(int i=0; i<5; i++){
          digitalWrite(farol_1, HIGH);
          digitalWrite(farol_2, HIGH);
          digitalWrite(laterna_1, HIGH);
          digitalWrite(laterna_2, HIGH);
          delay(250);
          digitalWrite(farol_1, LOW);
          digitalWrite(farol_2, LOW);
          digitalWrite(laterna_1, LOW);
          digitalWrite(laterna_2, LOW);
          delay(250);
        }
        break;

      case 'F':
      // Servo Motor
        motor.write(90);
      // RIGHT Engine
        digitalWrite(EN1, 1);
        digitalWrite(IN1, 1);
        digitalWrite(IN2, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 0);
      // LEFT Engine
        digitalWrite(EN2, 1);
        digitalWrite(IN3, 1);
        digitalWrite(IN4, 0);
        digitalWrite(M3, 0);
        digitalWrite(M4, 1);
        break;


      case 'R':
      // Servo Motor
        motor.write(50);
        break;

      case 'L':
      // Servo Motor
        motor.write(130);
        break;
        
      case 'B':
      // Servo Motor
        motor.write(90);
      // RIGHT Engine
        digitalWrite(EN1, 1);
        digitalWrite(IN1, 0);
        digitalWrite(IN2, 1);
        digitalWrite(M1, 0);
        digitalWrite(M2, 1);
      // LEFT Engine  
        digitalWrite(EN2, 1);
        digitalWrite(IN3, 0);
        digitalWrite(IN4, 1);
        digitalWrite(M3, 1);
        digitalWrite(M4, 0);
        break;
      
      case 'S':
      // Servo Motor
        motor.write(90);
      // Stop Engines
        digitalWrite(EN1, 0);
        digitalWrite(M1, 0);
        digitalWrite(M2, 0);
        digitalWrite(EN2, 0);
        digitalWrite(M3, 0);
        digitalWrite(M4, 0);
        break;

      case 'I':
      // Servo Motor
        motor.write(60);
      // RIGHT Engine
        digitalWrite(EN1, 1);
        digitalWrite(IN1, 1);
        digitalWrite(IN2, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 0);
      // LEFT Engine
        digitalWrite(EN2, 1);
        digitalWrite(IN3, 1);
        digitalWrite(IN4, 0);
        digitalWrite(M3, 0);
        digitalWrite(M4, 1);
        break;
      
      case 'G':
      // Servo Motor
        motor.write(120);
      // RIGHT Engine
        digitalWrite(EN1, 1);
        digitalWrite(IN1, 1);
        digitalWrite(IN2, 0);
        digitalWrite(M1, 1);
        digitalWrite(M2, 0);
      // LEFT Engine
        digitalWrite(EN2, 1);
        digitalWrite(IN3, 1);
        digitalWrite(IN4, 0);
        digitalWrite(M3, 0);
        digitalWrite(M4, 1);
        break;

      case 'J':
      // Servo Motor
        motor.write(120);
      // RIGHT Engine
        digitalWrite(EN1, 1);
        digitalWrite(IN1, 0);
        digitalWrite(IN2, 1);
        digitalWrite(M1, 0);
        digitalWrite(M2, 1);
      // LEFT Engine  
        digitalWrite(EN2, 1);
        digitalWrite(IN3, 0);
        digitalWrite(IN4, 1);
        digitalWrite(M3, 1);
        digitalWrite(M4, 0);
        break;

      case 'H':
      // Servo Motor
        motor.write(60);
      // RIGHT Engine
        digitalWrite(EN1, 1);
        digitalWrite(IN1, 0);
        digitalWrite(IN2, 1);
        digitalWrite(M1, 0);
        digitalWrite(M2, 1);
      // LEFT Engine  
        digitalWrite(EN2, 1);
        digitalWrite(IN3, 0);
        digitalWrite(IN4, 1);
        digitalWrite(M3, 1);
        digitalWrite(M4, 0);
        break;
      
    }
  }
}
