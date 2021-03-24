int pin1Moteur = 8; //pin de commande moteur 1
int pin2Moteur = 9; // pin de commande moteur 1
/*int pinPMoteur = 10; // pin PWM moteur 1
int pot = A0;*/
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1Moteur, OUTPUT);
  pinMode(pin2Moteur, OUTPUT);
  /*pinMode(pinPMoteur, OUTPUT);
  pinMode(pot, INPUT);**/
}

void loop() {
  /*int valeurpot = analogRead(pot);
  int valeur = map(valeurpot, 0 , 1023, 0, 255);
  analogWrite(pinPMoteur, valeur);*/
  digitalWrite(pin1Moteur, HIGH);
  digitalWrite(pin2Moteur, LOW);
  delay(5000);
  digitalWrite(pin1Moteur, LOW);
  digitalWrite(pin2Moteur, LOW);
  delay(1000);
  digitalWrite(pin1Moteur, LOW);
  digitalWrite(pin2Moteur, HIGH);
  delay(5000);
  digitalWrite(pin1Moteur, LOW);
  digitalWrite(pin2Moteur, LOW);
  delay(1000);
}
