/*
 * LED STRIP COLOR CYCLE
 *
 * Fades in and out the three color channels of the LED strip.
 *
 * Circuit:
 *     - Red, green, and blue LED strip channels connected to pins 9, 10, and 11 through a MOSFET.
 */

int r = 9;
int g = 10;
int b = 11;

void setup() {
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
}

void loop() {
    // fade in and fade out the red channel of the LED strip
    for(int brightness = 0; brightness < 256; brightness++) {
        analogWrite(r, brightness);
        delay(10);
    }
    for(int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(r, brightness);
        delay(10);
    }
    

    // fade in and fade out the green channel of the LED strip
    for(int brightness = 0; brightness < 256; brightness++) {
        analogWrite(g, brightness);
        delay(10);
    }
    for(int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(g, brightness);
        delay(10);
    }
    

    // fade in and fade out the blue channel of the LED strip
    for(int brightness = 0; brightness < 256; brightness++) {
        analogWrite(b, brightness);
        delay(10);
    }
    for(int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(b, brightness);
        delay(10);
    }
}
