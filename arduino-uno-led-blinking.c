/*  
    Project name : LED BLINK
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-led-blinking
*/

int LED_Pin = 13;  // 13 is Led Pin
void setup()
{
  pinMode(LED_Pin, OUTPUT);  //Set a pin as Output
}


void loop()
{
  digitalWrite(LED_Pin, HIGH);   //Led is ON 
  delay(1000);
  digitalWrite(LED_Pin, LOW);    //Led is OFF
  delay(1000);                                            
}
