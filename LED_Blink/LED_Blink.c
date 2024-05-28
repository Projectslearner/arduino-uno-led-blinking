/*
    Code by : Projects_learner
    Project name : LED BLINK
    Modified Date: 27-05-2023
    Website : https://projectslearner.com/learn/arduino-uno-led
*/
int LED_Pin = 13;
void setup()
{
  pinMode(LED_Pin, OUTPUT);
}


void loop()
{
  digitalWrite(LED_Pin, HIGH);  
  delay(1000);
  digitalWrite(LED_Pin, LOW);  
  delay(1000);                                            
}
