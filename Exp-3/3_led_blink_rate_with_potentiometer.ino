// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  int potValue = analogRead(A2);                   
  int ledBrightness = map(potValue, 0, 1023, 0, 255);    // Map to 0-255
  analogWrite(9, ledBrightness);                 
  delay(10); // Small delay
}