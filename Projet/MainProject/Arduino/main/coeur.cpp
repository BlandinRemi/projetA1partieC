#include <Arduino.h>
#include "coeur.h"
#include "param.h"
int pinLed[10] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3};
int pause = 300;
int valeurLue;
int zero = 0;


void ini(){
  Serial.begin (9600);
  pinLed[0]=7;
  pinLed[1]=8;
  pinLed[2]=6;
  pinLed[3]=5;
  pinLed[4]=4;
  pinLed[5]=3;
  pinLed[6]=12;
  pinLed[7]=10;
  pinLed[8]=11;
  pinLed[9]=9;



for(int i = 0; i < 10; i++) 
  {
    pinMode(pinLed[i], OUTPUT);
    digitalWrite(pinLed[i], LOW);
  }
}
void choix(){



    switch (choiceValue) {
  case 1://chenille
if (analogRead(0) > 100){
    chenille();
}
    break;
    
  case 2://toute
if (analogRead(0) > 100){
     toute();
    }
    break;
    
  case 3://1sur2
if (analogRead(0) > 100){
    unSurDeux();
    }
    else {
    digitalWrite(pinLed[0], LOW);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], LOW);
    digitalWrite(pinLed[5], LOW);
    digitalWrite(pinLed[6], LOW);
    digitalWrite(pinLed[7], LOW);
    digitalWrite(pinLed[8], LOW);
    digitalWrite(pinLed[9], LOW); 
    }
    break;
    
  case 4://1sur3
if (analogRead(0) > 100){
     unSurTrois();
}
    else {
    digitalWrite(pinLed[0], LOW);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], LOW);
    digitalWrite(pinLed[5], LOW);
    digitalWrite(pinLed[6], LOW);
    digitalWrite(pinLed[7], LOW);
    digitalWrite(pinLed[8], LOW);
    digitalWrite(pinLed[9], LOW); 
    }
    break;
    
  case 5://Aller retour
if (analogRead(0) > 100){
    allerRetour();
    }
    break;
    }}




void chenille(){

for (int i=0; i < 10; i++)
    {
      digitalWrite(pinLed[i], HIGH);
      delay (30);
    }
    for (int i=0; i < 10; i++)
    {
      digitalWrite(pinLed[i], LOW);
      delay (30);
};}

void toute(){

    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[1], HIGH);
    digitalWrite(pinLed[2], HIGH);
    digitalWrite(pinLed[3], HIGH);
    digitalWrite(pinLed[4], HIGH);
    digitalWrite(pinLed[5], HIGH);
    digitalWrite(pinLed[6], HIGH);
    digitalWrite(pinLed[7], HIGH);
    digitalWrite(pinLed[8], HIGH);
    digitalWrite(pinLed[9], HIGH);

    delay (400);
    
    digitalWrite(pinLed[0], LOW);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[4], LOW);
    digitalWrite(pinLed[5], LOW);
    digitalWrite(pinLed[6], LOW);
    digitalWrite(pinLed[7], LOW);
    digitalWrite(pinLed[8], LOW);
    digitalWrite(pinLed[9], LOW);

    delay (400);
};

void unSurDeux(){

digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[2], HIGH);
    digitalWrite(pinLed[4], HIGH);
    digitalWrite(pinLed[6], HIGH);
    digitalWrite(pinLed[8], HIGH);
    digitalWrite(pinLed[1], LOW);
    digitalWrite(pinLed[3], LOW);
    digitalWrite(pinLed[5], LOW);
    digitalWrite(pinLed[7], LOW);
    digitalWrite(pinLed[9], LOW);

    delay (450);
    
    digitalWrite(pinLed[0], LOW);
    digitalWrite(pinLed[2], LOW);
    digitalWrite(pinLed[4], LOW);
    digitalWrite(pinLed[6], LOW);
    digitalWrite(pinLed[8], LOW);
    digitalWrite(pinLed[1], HIGH);
    digitalWrite(pinLed[3], HIGH);
    digitalWrite(pinLed[5], HIGH);
    digitalWrite(pinLed[7], HIGH);
    digitalWrite(pinLed[9], HIGH);

    delay (450);
};

void unSurTrois(){

digitalWrite(pinLed[0], HIGH);

    digitalWrite(pinLed[3], HIGH);

    digitalWrite(pinLed[6], HIGH);


    delay (pause);
    
    digitalWrite(pinLed[0], LOW);

    digitalWrite(pinLed[3], LOW);

    digitalWrite(pinLed[6], LOW);



    delay (pause);

    digitalWrite(pinLed[1], HIGH);

    digitalWrite(pinLed[4], HIGH);

    digitalWrite(pinLed[7], HIGH);


    delay (pause);
    
    digitalWrite(pinLed[1], LOW);

    digitalWrite(pinLed[4], LOW);

    digitalWrite(pinLed[7], LOW);



    delay (pause);

    digitalWrite(pinLed[2], HIGH);

    digitalWrite(pinLed[5], HIGH);

    digitalWrite(pinLed[8], HIGH);


    delay (pause);
    
    digitalWrite(pinLed[2], LOW);

    digitalWrite(pinLed[5], LOW);

    digitalWrite(pinLed[8], LOW);

    delay (pause);

    digitalWrite(pinLed[0], HIGH);

    digitalWrite(pinLed[7], HIGH);

    digitalWrite(pinLed[9], HIGH);


    delay (pause);
    
    digitalWrite(pinLed[0], LOW);

    digitalWrite(pinLed[7], LOW);

    digitalWrite(pinLed[9], LOW);

    delay (pause);
};

void allerRetour(){

for (int i; i < 10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
    delay (40);
  }
  for (int i = 10; i != 0; i--)
  {
    digitalWrite (pinLed[0], LOW);
    digitalWrite(pinLed[i], LOW);
    delay (40);
  }
};

