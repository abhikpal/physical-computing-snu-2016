/*
 * SIMPLE ANALOG WRITE
 *
 * Changes the brightness of an LED connected to the Arduino.
 *
 * Circuit:
 *     - 5mm LED conncted to pin 9.
 */

void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    // analogWrite() takes in values from 0 to 255. 0 being the minimum "brightness" and 255 the
    // maximum.
    
    analogWrite(9, 0);
    delay(500);

    analogWrite(9, 31);
    delay(500);

    analogWrite(9, 127);
    delay(500);

    analogWrite(9, 255);
    delay(500);
}
