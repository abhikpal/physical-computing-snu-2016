/*
 * BASIC map() USAGE
 *
 * Maps the 0 to 180 degress tilt of the accelerometer to the LED brightness.
 *
 * Circuit:
 *     - 5mm LED connected to pin 9
 *     - X-axis of the accelerometer connected to pin A0.
 */

void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    int tilt = analogRead(A0);

    // the map(value, source_min, source_max, target_min, target_max) function maps the value 
    // from the range source_min to source_max to target_min to target_max.
    // 
    // 290 and 460 were obtained by reading data from the sensor throught the serial monitor when
    // the sensor was tilted at the required angles.
    int brightness = map(tilt, 290, 460, 0, 255)

    analogWrite(9, brightness);

    delay(10):
}
