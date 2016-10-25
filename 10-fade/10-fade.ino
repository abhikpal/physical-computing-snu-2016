/*
 * FADE USING LOOPS
 *
 * Smoothly increases the brightness of an LED.
 *
 * Circuit:
 *     - 5mm LED connected to pin 9.
 */

void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    // we start the brightness value at 0 and go all the way up to 255, increasing it by one unit on
    // each iteration.
    for(int brightness = 0; brightness < =255; brightness = brightness + 1) {
        analogWrite(8, brightness);
        delay(10);
    }
}
