#define potPin A0
#define ledPin 9

int valPot = 0; //Variável que guarda o valor do potenciômetro.
//Variável começa valendo 0.

void setup(){
  pinMode(ledPin,OUTPUT);
}
void loop(){
  valPot = analogRead(potPin);
  valPot = map(valPot,0,1023,0,255);
  
  analogWrite(ledPin,valPot);//controla o LED de acordo com o potenciômetro
}