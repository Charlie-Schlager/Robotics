#include <Servo.h> 

int potPin = 0;  
int servoPin = 9;
Servo servo; 
 
void setup() 
{ 
  servo.attach(servoPin);  
} 
 
void loop() 
{ 
  int reading = analogRead(potPin);     
  int angle = reading / 6;              
  servo.write(angle);  

  if (0 < analogRead(potPin) <= 200) {
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  }

  if (201 < analogRead(potPin) <= 400) {
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  }

  if (401 < analogRead(potPin) <= 600) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  }

  if (601 < analogRead(potPin) <= 800) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  }
  
  if (801 < analogRead(potPin) <= 1000) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
    }

  if (1001 < analogRead(potPin) <= 1023) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
    }

} 
