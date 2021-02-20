#include<OneWire.h>
#include<DallasTemperature.h>
float temp=0.0;
int Temp_read=12;
int DigitalOutput=5;
OneWire bus(Temp_read);//object of many sensors connected in a list. 
DallasTemperature sensor(&bus);//object of the sensor 

void setup() {
  // put your setup code here, to run once:
    pinMode(DigitalOutput,OUTPUT);                                                                                      
    digitalWrite(DigitalOutput, LOW);
    Serial.begin(9600);
    sensor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor.requestTemperatures(); //gets all the info on sensors connected to the bus as a list
  temp=sensor.getTempFByIndex(0);//returns first temp from the list
  temp=(temp-32)*5/9;
  Serial.println(temp);
  if (temp>25)
  {
    digitalWrite(DigitalOutput,HIGH);
  }
  delay(1000);
  digitalWrite(DigitalOutput,LOW);
}
