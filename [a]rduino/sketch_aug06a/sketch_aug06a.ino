int ledPin = 13;
int switchPin = 10;
int switchValue = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
  switchValue = digitalRead(switchPin);
  digitalWrite(ledPin, switchValue);

if(switchValue == LOW) {
  digitalWrite(ledPin, HIGH);
} else {
  digitalWrite(ledPin, LOW);
}

//  if(switchValue == HIGH) {
//    digitalWrite(ledPin, LOW);
//  } else {
//    digitalWrite(ledPin, HIGH);
//  }
  delay(50);
}
