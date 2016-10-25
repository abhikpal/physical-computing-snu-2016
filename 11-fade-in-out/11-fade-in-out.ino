/*
 * FADE-IN/FADE-OUT 
 *
 * Smoothly turns on an LED then smoothly switches it off.
 *
 * Circuit:
 *     - 5mm LED connected to pin 9
 */

void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    // we start the brightness value at 0 and go all the way up to 255, increasing it by one unit on
    // each iteration. We do the reverse while dimming the LED.
     
    for(int brightness = 0; brightness <= 255; brightness = brightness + 1) {
        analogWrite(8, brightness);
        delay(10);
    }

    for(int brightness = 255; brightness >= 0; brightness = brightness - 1) {
        analogWrite(8, brightness);
        delay(10);
    }
}
