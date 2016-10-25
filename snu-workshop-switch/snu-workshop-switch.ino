
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  // read from the switch
  int button = digitalRead(2);
  // when the switch is pressed
  if (button == HIGH) {
    // turn on the LED
    digitalWrite(13, HIGH);  
  }
  // when it is not pressed
  else {
    // when it is not pressed
    digitalWrite(13, LOW);
     
  }
  delay(50);
}
