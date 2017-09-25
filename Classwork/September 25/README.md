# Lesson 14 Servo Motors

## Description
I made a servo rotate deegres based on the values read on the potentiometer. The more you rotate the potentiometer, the more the servo spins, until finally, after full potentiometer rotation, the servo rotates continuously. 

## Creative Add-on
I added an LED scale that displays the level the potentiometer is turned all the way up to full rotation.

## Problems
I was having trouble integrating the LED display and the potentiometer value. I eventually figured out it was becasue I cannot do a due comparison, I have to do 2 indepentand comparisons and and && inbetween them.

## Resources 
- Code: `Servo_Sweep.ino` `Servo_Knob.ino`
- Working Video: `Servo_Knob_LED_Levels`
- Lesson: [Lesson 14](https://learn.adafruit.com/adafruit-arduino-lesson-14-servo-motors/overview)
