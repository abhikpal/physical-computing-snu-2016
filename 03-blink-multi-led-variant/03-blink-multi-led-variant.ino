/*
 * MULTI LED BLINK (VARIANT)
 *
 * Turns on both the LEDs at the same time; switches one off, waits for a while, switches the other
 * off.
 *
 * Circuit:
 *     - 5mm LEDs connected to pins 12 and 13.
 */

void setup() {
    // set both pins as output.
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
}

void loop() {
    // turn on both the LEDs
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(500);

    // turn off the first LED
    digitalWrite(13, LOW);
    delay(500);

    // turn off the second LED
    digitalWrite(12, LOW);
    delay(500);
}
