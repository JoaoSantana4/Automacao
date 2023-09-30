int ledR = 10;
int ledA = 9;
int ledV = 8;
int val;      
//declarou as variaveis como numeros inteiros


void setup(){
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
}

void loop(){
  val=analogRead(A0);
  if (val>=0 && val<255){
    digitalWrite(ledR, HIGH);
    digitalWrite(ledA, LOW);
    digitalWrite(ledV, LOW);
  }
  
  if (val>=255 && val<511){
    digitalWrite(ledR, HIGH);
    digitalWrite(ledA, HIGH);
    digitalWrite(ledV, LOW);
  }
  
  if (val>=511 && val<767){
    digitalWrite(ledR, LOW);
    digitalWrite(ledA, HIGH);
    digitalWrite(ledV, HIGH);
  }
  }