/* ----------------------------------------------------------------------
File: CurrentSensing.ino
Author: Sergey Zolotykh
---------------------------------------------------------------------- */
int in1Pin = A1;
int in2Pin = A2;

int nSleep = 13;

const int ipropiPin = A4;

// Set the motor speed to half of the maximum
int motorSpeed = 128;

double Vref = 3.3;
double Aipropi = 0.455;
double Ripropi = 1.2; // 1.2 KOhm
int DacMax = 1024;

void setup() {
  Serial.begin(9600);
  // Enable motor controller
  pinMode(nSleep, OUTPUT);
  // set the motor control pins as outputs
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);

  digitalWrite(nSleep, HIGH);

  analogWrite(in1Pin, motorSpeed);
  analogWrite(in2Pin, 0);
}

void loop() {
    int avarage = analogRead(ipropiPin); // Read the analog value
    double current = ((double)avarage/DacMax * Vref) / (Ripropi * Aipropi);
    Serial.print(avarage);
    Serial.print(" - ");
    Serial.println(current);
    delay(1000);
}
