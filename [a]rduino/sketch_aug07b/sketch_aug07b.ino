int ledPin = 13;
int switchPin = 9;
int switchValue = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
  switchValue = digitalRead(switchPin);
  digitalWrite(ledPin, switchValue);

  if(switchValue == HIGH) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(50);
}
