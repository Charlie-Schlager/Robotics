#include <Servo.h> 

int potPin = 0;  
int servoPin = 9;
Servo servo; 
 
void setup() 
{ 
  pinMode(7, OUTPUT);
   pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
     pinMode(4, OUTPUT);
      pinMode(3, OUTPUT);
       pinMode(2, OUTPUT);
  servo.attach(servoPin);  
  Serial.begin(9600);
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
  digitalWrite(2, LOW);
  }

  if (201 < analogRead(potPin) && analogRead(potPin) <= 400) {
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  }

  if (401 < analogRead(potPin) && analogRead(potPin) <= 600) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  }

  if (601 < analogRead(potPin) && analogRead(potPin) <= 800) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  }
  
  if (801 < analogRead(potPin) && analogRead(potPin) <= 1000) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
    }

  if (1001 < analogRead(potPin) && analogRead(potPin) <= 1024) {
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
    }
Serial.println(analogRead(potPin));
} 
