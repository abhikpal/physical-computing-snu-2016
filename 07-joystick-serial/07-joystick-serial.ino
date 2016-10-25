/*
 * JOYSTICK AND THE SERIAL MONITOR
 *
 * Reads the two axes from the joystick conncted to the Arduino and prints out the data on the
 * Serial Monitor.
 *
 * Circuit:
 *     - Joystick X-axis conncted to pin A0
 *     - Joystick Y-axis conncted to pin A1
 */

void setup() {
    Serial.begin(9600);    
}

void loop() {
    int joystick_x_val = analogRead(A0);
    int joystick_y_val = analogRead(A1);


    // We print the x axis value, add a space, then print the y axis value.
    Serial.print(joystick_x_val);
    Serial.print(" ");
    Serial.prinln(joystick_y_val);

    delay(100);
}
