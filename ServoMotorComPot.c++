#include "Servo.h"

Servo meuservo;
int valPot = 0;
int potenciometroPino0 = 0;

void setup() {
    meuservo.attach(9);
}

void loop(){
    valPot = analogRead(potenciometroPino0);
    valPot = map(valPot, 0, 1023, 0, 179);
    meuservo.write(valPot);

    delay(15);
}