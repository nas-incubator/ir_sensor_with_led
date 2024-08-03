const int irSensorPin = 6; // IR sensor output pin
const int ledPin = 5; // LED pin

void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Object detected");
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
    Serial.println("No object detected");
  }

  delay(100); // Small delay to stabilize the readings
}