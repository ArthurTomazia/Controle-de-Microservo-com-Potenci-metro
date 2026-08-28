#include <Servo.h>

    //Projet Servo Motor//
    //Autor: Arthur Tomazia//
    //*****Iniciar codigo****

    const int Led1 =12;
    const int Led2 =11;
    const int Pot_pin= A0;

//Declaraçãode Variavel//

int Pot,grau;
Servo servoMotor;

void setup() {
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 servoMotor.attach(9);

}

void loop() {

Pot = analogRead(A0);
grau= map(Pot,0,1023,0,255);
servoMotor.write(grau);
delay(100);

if(grau < 127){
  digitalWrite(11,LOW);
  digitalWrite(12, LOW);
  
} else if(grau > 122 && grau < 200){
  
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  
  } else{
    
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
    }

}

