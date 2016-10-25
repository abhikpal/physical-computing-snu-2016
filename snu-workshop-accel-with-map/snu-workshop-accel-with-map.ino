void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int sensor = analogRead(A0);
  int brightness = map(sensor, 290, 460, 0, 255);
  analogWrite(9, brightness);
  delay(10);
}
