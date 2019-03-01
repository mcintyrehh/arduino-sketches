int led1Pin = 4;
int led2Pin = 5;

void setup() {
  // put your setup code here, to run once:
  // initializing LED pins as an output:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  setLed1(HIGH); // Sets LED1 on, LED2 off
  setLed1(LOW);  // Sets LED2 off, LED2 on
}
void setLed1(int led1) {
  digitalWrite(led1Pin, led1);
  digitalWrite(led2Pin, led1 == HIGH ? LOW : HIGH);
  delay(1000);
}
