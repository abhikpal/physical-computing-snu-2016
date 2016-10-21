/*
 * MULTI LED BLINK
 *
 * Blinks two LEDs each connected to pins 13 and 12 sequentially.
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
    // blink the LED connected to pin 13
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);

    // blink the LED connected to pin 12
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
}
