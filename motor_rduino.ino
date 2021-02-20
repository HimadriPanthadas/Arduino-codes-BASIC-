int en1=5;
int in1=7;
int in2=6;
int en2=4;
int in3=3;
int in4=2;


void setup() {
  // put your setup code here, to run once:
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

  digitalWrite(en1,LOW);
  digitalWrite(en2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(en1,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  
}
