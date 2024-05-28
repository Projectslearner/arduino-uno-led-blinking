/*
    Code by : Projects_learner
    Project name : LED_Chaser
    Modified Date: 27-05-2023
    Website : https://projectslearner.com/learn/arduino-uno-led-chaser
*/


int led1 = 2;           //pin 2 as led1
int led2 = 3;           //pin 3 as led2
int led3 = 4;           //pin 4 as led3
int led4 = 5;           //pin 5 as led4

void  setup()
{
pinMode(2,OUTPUT);      //  pin 2 as OUTPUT
pinMode(3,OUTPUT);      //  pin 3 as OUTPUT
pinMode(4,OUTPUT);      //  pin 4 as OUTPUT
pinMode(5,OUTPUT);      //  pin 5 as OUTPUT
}

void  loop()
{
  digitalWrite(led1,HIGH);
  delay(1000);
 
  
  digitalWrite(led2,HIGH);
  delay(1000);
  
  
  digitalWrite(led3,HIGH);
  delay(1000);
 
  
  digitalWrite(led4,HIGH);
  delay(1000);
  
  
   digitalWrite(led1,LOW);
  delay(1000);
  
  digitalWrite(led2,LOW);
  delay(1000);
  
   digitalWrite(led3,LOW);
  delay(1000);
  
  digitalWrite(led4,LOW);
  delay(1000);
}
