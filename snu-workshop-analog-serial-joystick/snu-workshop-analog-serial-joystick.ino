void setup() {
  Serial.begin(9600);

}

void loop() {
  int joystickX = analogRead(A0);
  int joystickY = analogRead(A1);
  
  Serial.print(joystickX);
  Serial.print(" ");
  Serial.println(joystickY);
  delay(100);
}
