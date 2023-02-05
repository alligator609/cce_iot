// the setup routine runs once when you press reset:
const int led_pin = 3;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode (led_pin,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
  if(voltage>2.4){
  digitalWrite(led_pin,HIGH);
  Serial.println("HIGH");
  }
  else{
   digitalWrite(led_pin,LOW);
   Serial.println("HIGH");
  }
}
