/*
    Code by : Projects_learner
    Project name : LED GLOW
    Modified Date: 27-05-2023
    Website : https://projectslearner.com/learn/arduino-uno-led
*/

int LED_Pin = 13;   //set 13 as LED Pin
void setup()
{
  pinMode(LED_Pin, OUTPUT);   // set a 13 pin as Output
}


void loop()
{
  digitalWrite(LED_Pin, HIGH);  // HIGH - LED Glow
  delay(1000);                      
}
