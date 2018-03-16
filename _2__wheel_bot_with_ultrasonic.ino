#define trig 3
#define echo 2
#define trig1 4
#define echo1 5
void setup() {
  pinMode(9,OUTPUT);  //m1
pinMode(10,OUTPUT);   //m1
pinMode(6,OUTPUT);    //m2
pinMode(7,OUTPUT);    //m2
pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
}
//m1
void loop() {
   digitalWrite(trig,LOW);
digitalWrite(trig,HIGH);
delayMicroseconds(2);
digitalWrite(trig,LOW);
delayMicroseconds(8);
long duration=pulseIn (echo,HIGH);
float distance = (0.0170 * duration);

//m2
digitalWrite(trig1,LOW);
digitalWrite(trig1,HIGH);
delayMicroseconds(2);
digitalWrite(trig1,LOW);
delayMicroseconds(8);
long duration1=pulseIn (echo1,HIGH);
float distance1 = (0.0170 * duration);


 if( distance>=5 && distance1>=5)
  {
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  }
  else if(distance<=5 && distance1<=5 )
  {
   digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  }
  else if(distance<=5 && distance1>=5 )
  {
    digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  }
  else if(distance>=5 && distance1<=5)
  {
    digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  }





  

}
