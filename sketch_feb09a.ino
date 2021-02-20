int a =2,b=3,c=4,d=5,e=6,f=7,g=8,dp=9;
void funcStop()
{
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(g,LOW);
    digitalWrite(f,LOW);
    digitalWrite(a,LOW); 
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
}
void funcOne()
  {
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
  }
  void funcTwo()
  {
    digitalWrite(b,HIGH);

    digitalWrite(g,HIGH);

    digitalWrite(a,HIGH); 
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
  }
  void funcThree()
  {
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
   
    digitalWrite(a,HIGH); 
    digitalWrite(d,HIGH);
    
  }
  void funcFour()
  { 
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(f,HIGH);
   
  }
  void funcFive()
  {
  
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(a,HIGH); 
    digitalWrite(d,HIGH);

  }
  void funcSix()
  { 
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(a,HIGH); 
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
  }
  void funcSeven()
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
  }
  void funcEight()
  {
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(a,HIGH); 
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    
  }
  void funcNine()
  {
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(a,HIGH);  
   }
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  funcOne();
  delay(1000);
  funcStop();
  delay(1000);
  funcTwo();
  delay(1000);
  funcStop();
  delay(1000);
  funcThree();
  delay(1000);
  funcStop();
  delay(1000);
  funcFour();
  delay(1000);
  funcStop();
  delay(1000);
  funcFive();
  delay(1000);
  funcStop();
  delay(1000);
  funcSix();
  delay(1000);
  funcStop();
  delay(1000);
  funcSeven();
  delay(1000);
  funcStop();
  delay(1000);
  funcEight();
  delay(1000);
  funcStop();
  delay(1000);
  funcNine();
  delay(1000);
  funcStop();
  delay(1000 );
}
