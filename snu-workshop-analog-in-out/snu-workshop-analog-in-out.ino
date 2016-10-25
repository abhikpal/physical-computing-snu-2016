void setup() {
  pinMode(9, OUTPUT);  
}

void loop() {
  int sensor = analogRead(A0);
  int brightness = sensor/4;
  analogWrite(9, brightness);
  delay(10);
}
