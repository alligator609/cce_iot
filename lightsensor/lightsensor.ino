// the setup routine runs once when you press reset:
//10ohm-arduinoA0pin-photoresistor
const int analog_pin = A0;
const int led_pin = 3;
const int thresHold = 500;
void setup() {
  Serial.begin(9600);
  pinMode (led_pin,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  float sensorValue = analogRead(analog_pin);
   sensorValue = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);

 if (sensorValue <10){
    Serial.println(sensorValue);
    Serial.println("- dark");
    digitalWrite(led_pin,HIGH);
 }
  else if (sensorValue <200) {
   Serial.println(sensorValue);
    Serial.println("-dim");
    digitalWrite(led_pin,HIGH);
 }
  else if (sensorValue <500) {
   Serial.println(sensorValue);
    Serial.println("light");
      digitalWrite(led_pin,LOW);
 }
   else if (sensorValue <800) {
   Serial.println(sensorValue);
  Serial.println("bright");
    digitalWrite(led_pin,LOW);
 }
 else{
  Serial.println("very bright"); 
    digitalWrite(led_pin,LOW);  
 }
}
