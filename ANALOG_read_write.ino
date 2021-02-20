int digitalInput=2;
int digitalOutput=11;
void setup() {
  pinMode(digitalInput, INPUT);
  pinMode(digitalOutput, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(digitalOutput, HIGH);
  delay(1000);
  digitalWrite(digitalOutput, LOW);
  delay(1000);
  
  //int sensorValue=digitalRead(digitalInput);
  //int x=map(sensorValue,0,1023,0, 255);
//  if(sensorValue==LOW)
//  {
//    digitalWrite(digitalOutput,HIGH);
//  }
//  else
//  {
//    digitalWrite(digitalOutput,LOW);
//  }
//  Serial.print("Sensor Value: ");
//  Serial.println(sensorValue);
//  delay(500);

}
