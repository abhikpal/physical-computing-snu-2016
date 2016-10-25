void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int button = digitalRead(2);
  Serial.println(button);
  delay(100);
}
