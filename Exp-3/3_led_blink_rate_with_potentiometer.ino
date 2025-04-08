// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int potValue = analogRead(A2);  
  int ledBrightness = map(potValue, 0, 1023, 0, 255);    // Map to 0-255
  analogWrite(9, ledBrightness);  
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print(" | Brightness: ");
  Serial.println(ledBrightness); 
  delay(10); // Small delay
}