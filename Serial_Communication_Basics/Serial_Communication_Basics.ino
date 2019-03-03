//int counter = 0;        //define a variable to send data to serial port
//
//void setup() {
//  Serial.begin(9600);               //initialize the serial port, set the baud rate to 9600
//  Serial.println("UNO is ready!");  // print string
//}
//void loop() {
//  // print variable counter value to serial
//  Serial.print("counter: "); //print string 'counter: '
//  Serial.println(counter);   //print the variable counter value
//  delay(500);                 //wait 500ms to avaoid cycling too fast
//  counter++;                 //increase counter by 1
//}

//char inChar;   // define a variable to store characters  received from serial port
//
//void setup() {
//  Serial.begin(9600);             // initialize serial port, set baud to 9600
//  Serial.println("UNO is ready!");// print string
//}
//
//void loop() {
//  if (Serial.available()) {       //judge whether data has been received
//    inChar = Serial.read();       //read one character
//    Serial.print("UNO received: ");//print the string
//    Serial.println(inChar);
//  }
//}

//char inChar;      // define variable to store character from serial port
//int counter = 0;  // define variable as the data sent to Serial port
//
//void setup() {
//  Serial.begin(9600);   //initialize serial prot, set baud to 9600
//  Serial.println("Uno's ready and U.O.E.N.O.!");
//}
//
//void loop() {
//  //print value of var counter to serial
//  Serial.print("counter:");
//  Serial.println(counter);
//  delay(1000);
//  counter++;
//}
//
//void serialEvent() {
//  if(Serial.available()) {    //judge whether data has been received
//    inChar = Serial.read();   //read one char and assign it to inChar var
//    Serial.print("UNO received:"); // print string
//    Serial.println(inChar);   //print received char
//  }
//}

int inInt;        //define var to store data received from serial
int counter=0;    //define a var as data being sent to serial
int ledPin=11;    //# of LED pin

void setup() {
  pinMode(ledPin, OUTPUT);        //initialize LED pin as an output
  Serial.begin(9600);             //initialize serial port, baud to 9600
  Serial.println("UNO ya bitch!");
}
void loop() {
  if(Serial.available()) {        //judge whether data has been received
    inInt=Serial.parseInt();      //read an integer
    Serial.print("UNO received:");
    Serial.println(inInt);        //print received character
    //convert the received integer into PWM duty cycle of ledPin port
    analogWrite(ledPin, constrain(inInt, 0, 255));
  }
}
