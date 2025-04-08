int buzzer = 9;
int sensePin = A0; // analog pin to sense buzzer voltage

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Playing 500 Hz tone");
  tone(buzzer, 250);
  delay(4000);
  noTone(buzzer);
  delay(2000);

  Serial.println("Playing 1000 Hz tone");
  tone(buzzer, 1000);
  delay(4000);
  noTone(buzzer);
  delay(2000);
}