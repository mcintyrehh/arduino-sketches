const int ledCount = 10;  //# LEDs in the bar graph

// array of pin numbers to which LEDs are attached
int ledPins[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void setup() {
  //loop over the pin array and set them all to output:
  for (int i=0; i<ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // make the 'i'-th LED of the LED basr will light up
  for (int i=0; i<ledCount; i++) {
    barGraphDisplay(i);
  }
  for (int i=ledCount; i>0; i--) {
    barGraphDisplay(i-1);
  }
}
void barGraphDisplay(int ledOn) {
  //make the 'ledOn'-th LED of bar graph LED on and others off
  for (int i=0; i<ledCount; i++) {
    digitalWrite(ledPins[i], i==ledOn ? HIGH : LOW);
    delay(100);
  }
}
