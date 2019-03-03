int buttonPin = 12; // # of push button pin
int ledPin = 9;     // # of the LED pin
boolean isLighting = false; // define a variable to save state of LED

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT); // set push button pin into input mode
  pinMode(ledPin, OUTPUT);   // set LED pin into output mode
}

void loop() {
  if (digitalRead(buttonPin)==LOW) {    //if button is pressed
    delay(10);                          //delay 10ms to skip bounce phase where there is static in digital signal where input could receive multiple button presses/releases)
    if (digitalRead(buttonPin)==LOW) {  //confirm again button is pressed
      reverseLED();                     //reverse LED
      while (digitalRead(buttonPin)==LOW); //wait for release
      delay(10);                         //delay to skip bounce on release
    }
  }
}

void reverseLED() {
  digitalWrite(ledPin, (isLighting ? LOW : HIGH));
  isLighting = (isLighting ? false : true);
}
