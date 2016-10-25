/*
 * SERVO SWEEP
 *
 * Sweeps  servo connected to the Arduino from the starting 0 degree positon to the final 180 degree
 * position.
 *
 * Circuit:
 *     - Servo connected to pin 9
 */


// we will use a "library" for this example. This will handle all the low level details of moving
// the servo for us.
#include <Servo.h>

// we then create a servo "object" we can now control the servo thourgh this Servo object.
// Think of the first "Servo" as being the "data-type" and the second servo a varibale of Servo
// data-type.
Servo servo;

void setup() {
    // tell our Arduino that the servo is attached to pin 9
    servo.attach(9);
}

void loop() {
    // loop though all the angles and write that positon to the servo. 
    for(int angle = 0; angle <= 180; angle += 1) {
        servo.write(angle);
        delay(15);
    }

    // do the same motion in reverse to bring the servo back to the starting positon.
    for(int angle = 180; angle >= 0; angle -= 1) {
        servo.write(angle);
        delay(15);
    }
}

