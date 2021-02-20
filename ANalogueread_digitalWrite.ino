int startPin=13;
int pinCount=3;
int analog_input=A0;
void setup() {
  for(int i=pinCount; i>0;i--)
  {
    pinMode(startPin-i+1,OUTPUT);
  }
  pinMode(analog_input,INPUT);
  Serial.begin(9600);
}



void loop() {
  int analogValue= analogRead(analog_input);
  /*Serial.print("Analog integer=");
  Serial.print(analogValue);
  Serial.print("\n");*/
  float volt=5*analogValue/1023;
  if(volt>=3&&volt<=5)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
  }
  if(volt<3 && volt>=1)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
  }
  if(volt<1&&volt>=0)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
  }
}
