// C++ code
//
#include<Servo.h> 
Servo myservo; 
int pos=0; 
void setup() 
{ 
myservo.attach(7);
} 

void loop() { 
for(pos=0;pos<=180;pos++) 
{ 
myservo.write(pos); 
delay (1000); 
} 
delay (1000); 
for (pos=180; pos>=0;pos--) 
{ 
myservo.write (pos); 
delay (15); 
} 
delay(1000); 
}