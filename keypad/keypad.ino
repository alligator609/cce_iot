#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte  colPins[ROWS] = {6, 7, 8,9}; 
byte rowPins[COLS] = {2,3, 4, 5}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
}

/*
 https://www.circuitbasics.com/how-to-set-up-a-keypad-on-an-arduino/
 https://arduinogetstarted.com/images/cover/arduino-keypad-cover.jpg

 */