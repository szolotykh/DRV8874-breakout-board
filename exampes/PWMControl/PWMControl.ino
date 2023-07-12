/* ----------------------------------------------------------------------
File: PWMControl.ino
Author: Sergey Zolotykh
---------------------------------------------------------------------- */

// Define the motor control pins
int in1Pin = A1;
int in2Pin = A2;

void setup() {
    // Set pin modes to output
    pinMode(in1Pin, OUTPUT);
    pinMode(in2Pin, OUTPUT);

    // set the motor speed to half of the maximum
    int motorSpeed = 127;

    // Start the motor
    analogWrite(in1Pin, motorSpeed);
    analogWrite(in2Pin, 0);

    delay(2000);

    // Reverse the motor direction
    analogWrite(in1Pin, 0);
    analogWrite(in2Pin, motorSpeed);

    delay(2000);

    // Stop the motor
    analogWrite(in1Pin, 0);
    analogWrite(in2Pin, 0);
}

void loop() {
// do nothing
}