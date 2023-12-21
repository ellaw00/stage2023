int blue = 0;
int green = 255;
int displayY;
//float add_color (pin, val) {
// analogWrite(pin, val)/

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);  
  pinMode(11, OUTPUT);
  analogWrite(9, blue);
  analogWrite(11, green);
  
}

void loop() {
  float x = analogRead(A1);
  //color_x = 255 * x / 1023;
  
  int y = analogRead(A0);
  if (y > 1000) {
    // Si y (qui est l'inclinaison du joystick) est supérieur à 1000 on met la valeur displayY à -1
    displayY = -1;
  } else if (y < 100) {
    // Si y (qui est l'inclinaison du joystick) est inférieur à 100 on met la valeur displayY à 1
    displayY = 1;
  }
  else {
    displayY = 0;
  }
  
  //Serial.print(color_x);
  //Serial.print(",");
  //Serial.println(displayY);
  if(displayY == 1){
    analogWrite(11, green - 10);
    Serial.println(green);
    
  }
  else if (displayY == -1) {
    green = green + 10;
    analogWrite(11,green);
    Serial.println(green);
  }
  delay(20);
}
