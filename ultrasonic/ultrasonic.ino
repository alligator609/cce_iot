const int pingPin = 2;
const int echoPin = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, inches, cm;
  digitalWrite(pingPin,LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  inches =microsecondsToInches (duration);
  cm =microsecondsToCm (duration);
  Serial.print(inches);
  Serial.print("inches");
  Serial.print("\n");
  Serial.print(cm);
  Serial.print("cm");

}
long microsecondsToInches(long duration){
  return (duration/74/2);
}
long microsecondsToCm(long duration){
  return (duration/29/2);
}
