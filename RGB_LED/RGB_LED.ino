
/* Uncomment this to experiment with three potentiometers controling R G and B
// setting pin numbers
int ledPinR = 11;
int ledPinG = 10;
int ledPinB = 9;


void setup() {
  // initialize LED pins as an output:
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);

}

void loop() {
  int adcValue;   //defines variable to save the ADC value
  //Convert analog of A0 port into digital, and work as PWM duty cycle of ledPinR port
  adcValue = analogRead(A0);
  analogWrite(ledPinR, map(adcValue, 0, 1023, 0, 255));
  //Convert analog A1 to digital and use it as power level for Green LED
  adcValue = analogRead(A1);
  analogWrite(ledPinG, map(adcValue, 0, 1023, 0, 255));
  //Convert A2 to digital, and use it as power level for Blue LED
  adcValue = analogRead(A2);
  analogWrite(ledPinB, map(adcValue, 0, 1023, 0, 255));
}

*/

int ledPinR = 11;
int ledPinG = 10;
int ledPinB = 9;

void setup() {
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}
void loop() {
  //Generate three random numbers between 0-255 as the output PWM duty cycle of ledPin
  rgbLedDisplay(random(256), random(256), random(256));
  delay(500);
}
void rgbLedDisplay(int red, int green, int blue) {
  //Set three ledPin to output the PWM duty cycle
  analogWrite(ledPinR, constrain(red, 0, 255));
  analogWrite(ledPinG, constrain(green, 0, 255));
  analogWrite(ledPinB, constrain(blue, 0, 255));
}
