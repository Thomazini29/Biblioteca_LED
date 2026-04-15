/*
  Programa para piscar led em uma frequência de 1 Hz por 10 vezes. 
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);

void setup()
{
  ledA.piscar(1,10);
}

void loop()
{
  ledA.update();
}