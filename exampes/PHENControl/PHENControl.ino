/* ----------------------------------------------------------------------
File: PHENControl.ino
Author: Sergey Zolotykh
---------------------------------------------------------------------- */

// Define the motor control pins
int phPin = D1;
int enPin = A1;

void setup() {
    // Set the motor control pins as outputs
    pinMode(phPin, OUTPUT);
    pinMode(enPin, OUTPUT);

    // Set the direction
    digitalWrite(phPin, HIGH);

    // Set the speed to 50%
    analogWrite(enPin, 127);

    // Set the speed to 100%
    analogWrite(enPin, 255);

    // Reverse the direction
    digitalWrite(phPin, LOW);

    // Stop the motor
    analogWrite(enPin, 0);
}

void loop() {
// do nothing
}