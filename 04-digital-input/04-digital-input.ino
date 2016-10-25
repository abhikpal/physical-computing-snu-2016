/*
 * SIMPLE DIGITAL INPUT
 *
 * Reads input from a button and accordingly changes the state of an LED.
 *
 * Circuit
 *     - LED connected on Arduino pin 13
 *     - Pushbutton on Arduinno pin 2
 */

void setup() {
    pinMode(13, OUTPUT);
    pinMode(2, INPUT);
}

void loop() {
    // read data from the button
    int button = digitalRead(2);

    // if the button is pressed, switch on the LED; else, turn off the LED
    if(button == HIGH) {
        digitalWrite(13, HIGH);
    } else {
        digitalWrite(13, LOW);
    }

    // add a short delay to filter out noisy data from the switch
    delay(15);
}
