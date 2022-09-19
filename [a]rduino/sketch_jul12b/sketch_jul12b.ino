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

  delay(50);
}

// keep looking through the manual
// oh, and study too :facepalm:
