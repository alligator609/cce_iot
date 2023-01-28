const int ledPin2 = 2; 
const int ledPin3 = 3; 
const int ledPin4 = 4; 

void setup() {
  // initialize digital pin LED_BUILTIN as an output. pin 13
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin2, HIGH);  
  digitalWrite(ledPin3, LOW); 
  digitalWrite(ledPin4, HIGH);  
  delay(100);                      // wait for a mili second
  digitalWrite(ledPin2, LOW);  
  digitalWrite(ledPin3, HIGH); 
  digitalWrite(ledPin4, HIGH);  
  delay(100);                      // wait for a second
  digitalWrite(ledPin2, HIGH);  
  digitalWrite(ledPin3, LOW); 
  digitalWrite(ledPin4, LOW);  
  delay(100);                      // wait for a second

}
