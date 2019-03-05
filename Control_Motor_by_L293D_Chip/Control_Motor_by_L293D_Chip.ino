int in1Pin = 10;      // Define L293D channel 1 pin
int in2Pin = 9;       // Define L293D channel 2 pin
int enable1Pin = 11; // Define L293D enable 1 pin

boolean rotationDir;  // Define var to save motors direction
                      // true/false represent clockwise/ccw
int rotationSpeed;    // Define var to save motor rotation speed

void setup() {
  //initialize pin into an output mode
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
}

void loop() {
  int potenVal = analogRead(A0); //convert voltage of rotary potentiometer into digital
  //compare number with value 512, if more than 512 rotate clockwise, otherwise counter clockwise
  rotationSpeed = potenVal - 512;
  rotationDir = ((potenVal > 512) ? true : false);
  //calculate motor speed, the further deviation from (middle value) 512, the faster the moter
  rotationSpeed = abs(potenVal-512);
  //control the steering and speed of the motor
  driveMotor(rotationDir, map(rotationSpeed, 0, 512, 0, 255));
}

void driveMotor(boolean dir, int spd) {
  //control motor rotation direction
  if (rotationDir) {
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
  }
  else {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
  }
  //control motor rotation speed
  analogWrite(enable1Pin, constrain(spd, 0, 255));
}
