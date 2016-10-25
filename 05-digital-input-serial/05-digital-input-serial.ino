/*
 * SENDING DATA TO SERIAL MONITOR
 *
 * Reads from a switch and displays the data on the computer conncted to the Arduino. The new 
 * Arduino IDE also allows visualization of the data through the Serial Plotter.
 *
 * Circuit:
 *     - pushbutton conncted to pin 2
 */

void setup() {
    pinMode(2, INPUT);

    // we start the serial communcation with the computer by defining the 'baud' rate of the
    // communication i.e., the data rate at which the computer and the Ardunino will talk to each
    // other.
    Serial.begin(9600);
}

void loop() {
    // read data from the button
    int button_state = digitalRead(2);

    // print out the value to the serial monitor
    Serial.println(button_state);

    delay(100);
}
