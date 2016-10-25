/*
 * SERVO-JOYSTICK KNOB
 *
 * Reads from a joystick and writes that position to the servo. 
 *
 * Circuit:
 *     - Servo connected to pin 9
 *     - Joystick x-axis connected to pin A0
 */


#include <Servo.h>

Servo servo;

void setup() {
    servo.attach(9);
}

void loop() {
    // first read the position of the joystick
    int joystick_position = analogRead(A0);

    // convert it to the appropriate range
    int angle = map(joystick_position, 0, 1023, 0, 180);

    // write that positon to the servo
    servo.write(angle);

    delay(20);
}

