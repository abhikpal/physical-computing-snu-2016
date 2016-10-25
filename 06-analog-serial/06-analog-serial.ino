/*
 * ANALOG SENSOR TO SERIAL MONITOR
 *
 * Reads an analog sensor and prints out the reading on the serial monitor.
 *
 * Circuit:
 *     - Potentiometer connected to pin A0.
 */

void setup() {
    // we don't need to explicitly declare the A0 pin as an input.
    
    // start the serial communication
    Serial.begin(9600);
}

void loop() {
    // use analogRead() to read from the sensor
    int sensor_reading = analogRead(A0);

    // print out the data on the Serial Monitor and pause for a while.
    Serial.println(sensor_reading);
    delay(100);
}
