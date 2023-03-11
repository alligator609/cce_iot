#include "LiquidCrystal.h" //Initializing the library for LCD

LiquidCrystal lcd(7,6,5,4,3,2); //Initializing the pins where we have connected the LCD
void setup() //Anything written in it will only run once
{
lcd.begin(16, 2); //Initializing the interface on the LCD screen
lcd.setCursor(0, 0);// set the cursor to column 0, line1
lcd.print(" Welcome to ");//print name
lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print(" Arduino World ");//print name
}
void loop() //Anything written in it will run again and again
{
}
16X2.LCD. Arduino Uno
VSS. GND
VDD 5V
V0 Middle of 10K potentiometer

Connectthe two ends of potentiometer to GND and 5V

/*RS. Pin 7
R/W GND
E pin 6
D4 Pin 5
D5. Pin 4
D6 Pin 3
D7 Pin 2
A To 5V through 220 ohm resistor
K GND

https://www.instructables.com/Arduino-LCD-16x2-Tutorial-Interfacing-1602-LCD-Dis/
*/