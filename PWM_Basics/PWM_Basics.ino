//uncomment for example on how to do 4 seperate LEDs at different PMW duty cycles 2%, 10%, 50% and 100%

//// setting pin numbers
//int ledPin1 = 5,
//    ledPin2 = 6,
//    ledPin3 = 9,
//    ledPin4 = 10;
//    
//void setup() {
//  // setting each pin for output
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
//  pinMode(ledPin3, OUTPUT);
//  pinMode(ledPin4, OUTPUT);
//
//}
//
//void loop() {
//  // sets ports output PWM (pulse width modulation) waves with different duty cycles:
//  analogWrite(ledPin1, map(2, 0, 100, 0, 255));
//  analogWrite(ledPin2, map(10, 0, 100, 0, 255));
//  analogWrite(ledPin3, map(50, 0, 100, 0, 255));
//  analogWrite(ledPin4, map(100, 0, 100, 0, 255));
//}

/* uncomment this for LED breathing effect */
//set pin numbers
int ledPin1 = 5;

void setup() {
  // initialize pin as output
  pinMode(ledPin1, OUTPUT);
}

void loop() {
  // call breath() cyclically
  breath(ledPin1, 6);
  delay(500);
}

void breath(int ledPin, int delayMs) {
  for (int i=0; i<=255; i++) {
    analogWrite(ledPin, i);
    delay(delayMs);
  }
  for (int i=255; i>= 0; i--) {
    analogWrite(ledPin, i);
    delay(delayMs);
  }
}
