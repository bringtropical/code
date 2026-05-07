const int buttonPin = 2;
const int relayPin = 8;

int lastButtonState = HIGH;

// timing
const unsigned long interval = 86400000UL; // 24 hours
const unsigned long relayOnTime = 1000;    // 1 second
unsigned long lastAutoTrigger = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, HIGH); // relay OFF (active LOW)
}

void triggerRelay() {
  digitalWrite(relayPin, LOW);  // ON
  delay(relayOnTime);
  digitalWrite(relayPin, HIGH); // OFF
}

void loop() {
  unsigned long currentTime = millis();

  // 🔘 BUTTON TRIGGER
  int reading = digitalRead(buttonPin);
  if (lastButtonState == HIGH && reading == LOW) {
    triggerRelay();
  }
  lastButtonState = reading;

  // ⏰ AUTO DAILY TRIGGER
  if (currentTime - lastAutoTrigger >= interval) {
    lastAutoTrigger = currentTime;
    triggerRelay();
  }
}
