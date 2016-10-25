/*
 * ACCELEROMETER AND THE SERIAL MONITOR
 *
 * Reads the three axes from the accelerometer connected to the Arduino and prints out the data on 
 * the Serial Monitor.
 *
 * Circuit:
 *     - Accelerometer X-axis connected to pin A0
 *     - Accelerometer Y-axis connected to pin A1
 *     - Accelerometer Z-axis connected to pin A2
 */

void setup() {
    Serial.begin(9600);    
}

void loop() {
    int accel_x_val = analogRead(A0);
    int accel_y_val = analogRead(A1);
    int accel_z_val = analogRead(A2);

    Serial.print(accel_x_val);
    Serial.print(" ");
    Serial.print(accel_y_val);
    Serial.print(" ");
    Serial.prinln(accel_z_val);

    delay(100);
}
