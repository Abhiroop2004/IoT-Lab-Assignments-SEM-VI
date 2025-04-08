// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // Turn on LED Green
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(2000); // Wait for 2s
  
  // Turn on LED Blue
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  delay(2000); // Wait for 2s

  // Turn on LED Red
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(2000); // Wait for 2s
}
