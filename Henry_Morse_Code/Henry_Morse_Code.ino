// first test sketch



void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}
void blinkH() {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(400);
  }
  void blinkE() {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(400);
  }
  void blinkN() {
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(400);
  }
  void blinkR() {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(400);  
  }
void blinkY() {
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(1000);
}

void loop() {
  // Spells H E N R Y out in Morse Code:
  blinkH();
  blinkE();
  blinkN();
  blinkR();
  blinkY();
}
