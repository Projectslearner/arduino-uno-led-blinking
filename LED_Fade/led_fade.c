*/
    Code by : Projects_learner
    Project name : LED Dinner using Ardino UNO
    Modified Date : 28-05-2023
    Website : https://projectslearner.com/learn/arduino-uno-led-dimmer
*/




int brightness = 0;
int Led_pin = 9;
void setup()
{
  pinMode(Led_pin, OUTPUT);
}


void loop()
{
 for (brightness = 0; brightness <= 255; brightness += 5)
 {
    analogWrite(Led_pin, brightness);
    delay(30);
  }
 
  for (brightness = 255; brightness >= 0; brightness -= 5)
  {
    analogWrite(Led_pin, brightness);
    delay(30);
  }
}
