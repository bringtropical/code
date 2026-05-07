int sensorPin = A0;
const int buttonPin = 2;
const int relayPin = 8;

const unsigned long relayOnTime = 1000;

bool wasWet = true;

void triggerRelay();

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, HIGH);
}

void loop() {

  int moisture = analogRead(sensorPin);

  if (moisture > 700) {

    if (wasWet) {
      Serial.println("dry detected -> watering once");
      triggerRelay();
      wasWet = false;
    } else {
      Serial.println("still dry -> no repeat");
    }

  } else {
    Serial.println("wet -> reset state");
    wasWet = true;
  }

  if (digitalRead(buttonPin) == LOW) {
    triggerRelay();
    delay(300);
  }

  delay(20);
}

void triggerRelay() {
  digitalWrite(relayPin, LOW);
  delay(relayOnTime);
  digitalWrite(relayPin, HIGH);
}
