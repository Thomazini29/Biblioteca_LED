
/*
  Os dois Leds começam piscando em 1 Hz, e quando o botão boot é apertado, os dois desligam.
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(20);
Led ledB(40);
const int pinBotao = 0;

void setup() 
{
  pinMode(pinBotao, INPUT_PULLUP);
  ledA.piscar(2);
  ledB.piscar(2);  //Faz os leds inicarem o programa piscando.

}

void loop() 
{
  ledA.update();
  ledB.update();

  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnteriorBotao = 1;

  if(!estadoAtualBotao && estadoAnteriorBotao)
    {
      ledA.desligar();
      ledB.desligar();
    }
     estadoAnteriorBotao = estadoAtualBotao;            //Esse bloco é responsável por desligar os leds.
}
  
