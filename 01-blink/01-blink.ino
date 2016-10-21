/*
 * BLINK
 *
 * Turns on LED on pin 13 for half a second then turns it off. Does that continuously to create a
 * blink effect.
 *
 *
 * Circuit:
 *     We use the default LED connected to the Arduino.
 */

void setup() {
    // we first set pin 13 as OUTPUT
    pinMode(13, OUTPUT);
}

void loop() {
    // turn on pin 13
    digitalWrite(13, HIGH);

    // wait for half a second
    delay(500);

    // turn off pin 13
    digitalWrite(13, LOW);

    // wait for another half second.
    delay(500);
}
