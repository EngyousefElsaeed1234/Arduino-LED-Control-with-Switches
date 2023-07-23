
int led1 = 3 ;
int led2 = 10 ; 
int led3 = 11 ;
int led4 = 12 ; 
int led5 = 13 ; 
int led6 = 9 ;
int switchslides1 = 5 ;
int switchslides2 = 6 ;
int reading1 = 0 ;
int reading2 = 0 ; 
int counter1 = 0 ;
int counter2 = 0 ;

void setup()
{
  
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);

  
}

void loop()
{
reading1=digitalRead(switchslides1);
reading2=digitalRead(switchslides2);

if(reading1 == HIGH)
{
  counter1 ++ ; 
if(counter1 == 1)
{
  analogWrite(led1,127);
  digitalWrite(10,HIGH);
  delay(250);
}}
  
else
{
  analogWrite(led1,0);
  digitalWrite(10,LOW);
  counter1=0 ;
  delay(250);

}
 if(reading2 == HIGH)
{
  counter2 ++ ; 
if(counter2 == 1)
{
  analogWrite(led6,127);
  digitalWrite(12,HIGH);
  delay(250);

}}

else
{
  analogWrite(led6,27);
  digitalWrite(12,LOW);
  counter2=0 ;
  delay(250);

}
}
  
  
