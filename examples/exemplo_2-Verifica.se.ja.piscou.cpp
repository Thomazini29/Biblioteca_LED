/*
  Pisca o Led em 2 Hz por 10 vezes, e verifica se o Led já piscou.
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);
bool jaPiscou = false;

void setup() 
{
  
}

void loop() 
{
 ledA.update();
  if(!jaPiscou)
  {
    ledA.piscar(2, 10);
    jaPiscou = true;
  }
}
 