void setup() {
  Serial.begin(9600);

}

void loop() {
  int joystickX = analogRead(A0);
  Serial.println(joystickX);
  delay(100);
}
