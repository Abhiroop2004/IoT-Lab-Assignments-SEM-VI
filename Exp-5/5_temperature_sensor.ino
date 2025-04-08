// C++ code
//
const int LM35Pin = A0;
void setup()
{
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(LM35Pin);
  float voltage = val * (5.0 / 1023.0);
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(500);
}