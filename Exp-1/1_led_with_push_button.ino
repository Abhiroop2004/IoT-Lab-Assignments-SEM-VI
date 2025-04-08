// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(11, INPUT);
}

void loop()
{
if(digitalRead(11)==1){
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
  }
}