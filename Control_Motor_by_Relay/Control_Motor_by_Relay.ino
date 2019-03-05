
int relayPin = 9;
int buttonPin = 12;

int buttonState = HIGH;       //Record button state, and initialize the state as HIGH
int relayState = LOW;         //Record relay state, and initialize the state as LOW
int lastButtonState = HIGH;   //Record the button state of last detection
long lastChangeTime = 0;      //Record the time point for button state change

void setup() {
  pinMode(buttonPin, INPUT);  //push button pin to input mode
  pinMode(relayPin, OUTPUT);  //relay pin to output mode
  digitalWrite(relayPin, relayState); //set initial state of relay to 'off'
  Serial.begin(9600);                 //initialize serial port, set baud to 9600
}

void loop() {
  int currentButtonState = digitalRead(buttonPin);    //read current state of button pin
  //if button state has changed, record the time point
  if (currentButtonState != lastButtonState) {
    lastChangeTime = millis();
  }
  //if button state changes and stays stable for a while, then it should have skipped bounce phase
  if(millis() - lastChangeTime >10) {
    if(buttonState != currentButtonState) {   //confirm button state has changed
      buttonState = currentButtonState;
      if (buttonState == LOW) {               //low level indicates the button is pressed
        relayState = !relayState;             //reverse relay state
        digitalWrite(relayPin, relayState);   //update relay state
        Serial.println("Button is Pressed!");
      }
      else {                                  //high level indicates button is released
        Serial.println("Button is Released!");
      }
    }
  }
  lastButtonState = currentButtonState;       //save the state of the last button
}
