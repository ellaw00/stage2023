const int pinBleu = 9;
const int pinRouge = 10;
const int pinVert = 11;
int y = analogRead(A0);
float displayY = 0 ;

void setup() {
  // Pas besoin de configuration particulière dans le setup
  Serial.begin(9600);
}

void fadeIn() {

  for (int valeur = 0; valeur <= 255; valeur++) {
    analogWrite(pinBleu, valeur);
    analogWrite(pinRouge, 255 - valeur);
    analogWrite(pinVert, valeur);
    delay(10); // ajustez la vitesse du fondu selon vos préférences
  }
}

void fadeOut() {
  for (int valeur = 255; valeur >= 0; valeur--) {
    analogWrite(pinBleu, valeur);
    analogWrite(pinRouge, 255 - valeur);
    analogWrite(pinVert, valeur);
    delay(10); // ajustez la vitesse du fondu selon vos préférences
  }
}

void loop() {
  y = analogRead(A0);
  if (y > 1000) {
    // Si y (qui est l'inclinaison du joystick) est supérieur à 1000 on met la valeur displayY à -1
    displayY = -1;
  } else if (y < 100) {
    // Si y (qui est l'inclinaison du joystick) est inférieur à 100 on met la valeur displayY à 1
    displayY = 1;
  } else {
    displayY = 0;
  }
  if (displayY == 1){
  fadeIn();   // Augmenter l'intensité lumineuse
  delay(1000); // Attendre un moment à l'intensité maximale
  }
  else if (displayY == -1){
  fadeOut();  // Diminuer l'intensité lumineuse
  delay(1000); // Attendre un moment à l'intensité minimale
  }
  Serial.println(displayY);
}
