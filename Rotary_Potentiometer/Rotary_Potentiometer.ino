//int adcValue;    //define var to save ADC value
//float voltage;   //define var to save calculated voltage value
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(9600);       //initialize the serial port and set baud to 9600
//  Serial.println("UNO BITCH");
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  adcValue = analogRead(A0);      //convert analog of A0 port to digital
//  voltage = adcValue * (5.0 / 1023.0); //calculate voltage accordign to digital
//  //send the result to computer through serial
//  Serial.print("convertValue:");
//  Serial.println(adcValue);
//  Serial.print("Voltage:");
//  Serial.println(voltage);
//  delay(500);
//}

int adcValue;     //define var to save ADC value
int ledPin = 9;   //D9 to control LED

void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  adcValue = analogRead(A0);        //convert analog of A0 port to digital
  // map analog to 0-255 range, and works as PWM duty cycle of ledPin port
  analogWrite(ledPin, map(adcValue, 0, 1023, 0, 255));
}
