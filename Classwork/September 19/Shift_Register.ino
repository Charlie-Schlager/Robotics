#include <IRremote.h>

int RECV_PIN = 11;  //IR Receiving Pin
IRrecv irrecv(RECV_PIN); 
decode_results results;

int latchPin = 5;
int clockPin = 6;
int dataPin = 4;


byte leds = 0;


void setup() 
{
   Serial.begin(9600); //setting up the serial monitor so I can get the HEX codes of each button and map them
  
   irrecv.enableIRIn(); //Enabling the IR Reciever
  
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
  leds = 0;
  updateShiftRegister();
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(500);
  }
}

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
