void setup() {
  Serial.begin(9600);

}

void loop() {
  int accelX = analogRead(A0);
  int accelY = analogRead(A1);
  int accelZ = analogRead(A2);
  
  Serial.print(accelX);
  Serial.print(" ");
  Serial.print(accelY);
  Serial.print(" ");
  Serial.println(accelZ);
  delay(100);
}
