// C++ code
//
const int ldrPin = A0;    
const int ledPin = 9;      

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(ldrPin); // Read LDR value (0-1023)
  if (lightLevel < 500) 
  {    digitalWrite(ledPin, HIGH);  } 
  else 
  {    digitalWrite(ledPin, LOW);  }
}
