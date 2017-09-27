#define SENSORPIN 12

const int buzzer = 8;
const int led1 = 9;
const int led2 = 10;
int sensorState = 0, lastState=0; 

void setup() {
   pinMode(buzzer, OUTPUT);
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
  pinMode(SENSORPIN, INPUT);     
  digitalWrite(SENSORPIN, HIGH);
  Serial.begin(9600);
}

void loop(){
  sensorState = digitalRead(SENSORPIN);
  if (sensorState == LOW) {     
      for(int i = 1; i<7; i++) {
  tone(buzzer, 6000);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
  delay(500);
  noTone(buzzer);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
  delay(500);
  } 
  }  
  if (sensorState && !lastState) {
    Serial.println("Unbroken");
  } 
  if (!sensorState && lastState) {
    Serial.println("Broken");
  lastState = sensorState;
}
}
