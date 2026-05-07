const int buttonPin = 2;
const int relayPin = 8;

int lastButtonState = HIGH;

const unsigned long relayOnTime = 1000;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, HIGH);
}

void triggerRelay() {
  digitalWrite(relayPin, LOW);
  delay(relayOnTime);
  digitalWrite(relayPin, HIGH);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (lastButtonState == HIGH && reading == LOW) {
    triggerRelay();
  }

  lastButtonState = reading;
}
