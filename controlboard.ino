#include <Stepper.h>
#include <Servo.h>
const int SPR=20; /*steps per revolution*/
int servoOne=10;
int servoTwo=11;
int i=0;
int pos=0;
int P0=7;
int P1=8;
int P2=4;
int P3=5;
int ENCA=2;
int ENCB=3;
int DCpos=0;
int LinPos=0;
Stepper Stepper1(SPR,A0,A1,A2,A3);
Stepper Stepper2(SPR,9,A4,A5,6);
Servo servo1;
Servo servo2;
int state=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(ENCA, INPUT);
  pinMode(ENCB, INPUT);
  
  for(i=2;i<14;i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
  servo1.attach(servoOne);
  servo2.attach(servoTwo);
  Stepper1.setSpeed(60);
  Stepper2.setSpeed(60);
  attachInterrupt(digitalPinToInterrupt(ENCA),Read_encb,RISING);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos <= 270; pos += 1)
  { 
    servo1.write(pos);              
    delay(15);                       
  }
  Stepper1.step(SPR);
  delay(100);
  Stepper2.step(SPR);
  delay(100);

  for (pos = 270; pos >= 0; pos -= 1) { 
    servo1.write(pos);              
    delay(15);                      
  }
  Stepper1.step(-SPR);
  delay(100);
  Stepper2.step(-SPR);
  delay(100);
  DcMotor();
  delay(1000);


  for (pos = 0; pos <= 180; pos += 1)
  { 
    servo2.write(pos);              
    delay(15);                       
  }
  Stepper1.step(SPR);
  delay(100);
  Stepper2.step(SPR);
  delay(100);

  for (pos = 180; pos >= 0; pos -= 1) { 
    servo2.write(pos);              
    delay(15);                      
  }
  Stepper1.step(-SPR);
  delay(100);
  Stepper2.step(-SPR);
  delay(100);

  linearActuator();
  delay(1000);
}
void DcMotor()
{
  state=0;
  digitalWrite(P0,HIGH);
  digitalWrite(P1,LOW);
 
  delay(5000);
  
  digitalWrite(P0,LOW);
  digitalWrite(P1,LOW);
  
}

void linearActuator()
{
  state=1;
  digitalWrite(P2,HIGH);
  digitalWrite(P3,LOW);
 
  delay(4000);
  
  digitalWrite(P2,LOW);
  digitalWrite(P3,LOW);

}
void Read_encb()
{
  if(digitalRead(ENCB)>0)
  {
    if(!state)
    {
      DCpos++;
    }
    else
    {
      LinPos++;
    }
  }
  else
  {
    if(!state)
    {
      DCpos--;
    }
    else
    {
      LinPos--;
    }
  }
}
