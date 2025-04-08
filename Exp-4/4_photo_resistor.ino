// C++ code
//
const int ldrPin = A0;    
const int ledPin = 9;      

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(ldrPin); // Read LDR value (0-1023)
  int ledbrightness = map(lightLevel, 0, 1023, 0, 255); // Led 0-255
  analogWrite(ledPin, ledbrightness);
  delay(10); // Small delay
}
