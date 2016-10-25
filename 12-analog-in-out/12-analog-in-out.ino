/*
 * ANALOG IN TO ANALOG OUT
 *
 * Controls the brightness of an LED according to the position of a potentiometer conncected to A0.
 *
 * Circuit:
 *     - 5mm LED connected to pin 9.
 *     - Potentiometer connected to A0.
 */

void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    int pot_meter_reading = analogRead(A0);

    // the values coming from the potentiometer will be in the 0-1023 range, we need to map it to 
    // the 0 - 255 range to be useful as brightness vales. Here we simply divide the
    // pot_meter_reading by 4 to get it in the right range.
    // 
    // We will be a cleaner solution in the next sketch.
    int brightness = pot_meter_reading/4;

    analogWrite(9, brightness);

    delay(10);
}
