int lm1=D3; // lm-left motor & rm-right motor
int lm2=D4;
int rm1=D5;
int rm2=D6;
void setup()
{
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);

  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
  Serial.begin(9600);
}
void loop()
{
  int val1=1;
  int val2=1;
//  int val1=digitalRead(ir1);
  //int val2=digitalRead(ir2);
  //Serial.println(val1);
  //Serial.println(val2);
  if (val1==1 && val2==1)
  {
    digitalWrite(lm1,HIGH);
    digitalWrite(lm1,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }
 if(val1==0 && val2==1)
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm1,LOW);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
  }
  if(val1==1 && val2==0)
  {
    digitalWrite(lm1,HIGH);
    digitalWrite(lm1,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  }
  if(val1==0 && val2==0)
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm1,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  }
}
