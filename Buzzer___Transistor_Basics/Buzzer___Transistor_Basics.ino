/* Uncomment to practice with pushbutton buzzer activation
int buttonPin = 12;
int buzzerPin = 9;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzerPin, (digitalRead(buttonPin) == HIGH ? LOW : HIGH));
}
*/

int buzzerPin = 9;
float sinVal;         //define a variable to save sine value
int toneVal;          //define a variable to save sound frequency

void setup() {
  pinMode(buzzerPin, OUTPUT);   //set buzzer pin to output mode
}

void loop() {
  for (int x=0; x<360; x++) {     //X from 0 degrees -> 360 degrees
    sinVal = sin(x * (PI/180));   // calculate the sine of x
    toneVal = 2000 + sinVal * 500;  //calculate sound frequency according to the sine of x
    tone(buzzerPin, toneVal);     //output sound frequency to buzzerPin
    delay(1);
  }
}
