
int ledArray[] = {9, 8, 7, 6, 5, 4, 3, 2, 10};
int count = 0;
int timer = 5000;

void setup() {
for (count = 0; count <= 8; count++) {
  pinMode(ledArray[count], OUTPUT);
  Serial.begin(9600);
}
}

void loop() {
for (count = 0; count <= 8; count++) {
delay(timer);
digitalWrite(ledArray[count], HIGH);
Serial.println(count);
if(count == 7) {
tone(ledArray[8], 600);
}

}
noTone(ledArray[8]);

for (count = 8; count >= 0; count--) {
digitalWrite(ledArray[count], LOW);
}
}


