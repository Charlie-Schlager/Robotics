int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  setColor(255, 0, 0);
  delay(500);
  setColor(255, 50, 0);
  delay(500);
  setColor(255, 255, 0);
  delay(500);
  setColor( 0, 255, 0);
  delay(500);  
  setColor(0, 0, 255); 
  delay(500);
  setColor(75, 0, 130); 
  delay(500);
  setColor(139, 0, 255);
  delay(500);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
