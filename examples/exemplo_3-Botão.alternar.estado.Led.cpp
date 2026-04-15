/*
  Quando apertar o botão boot, o Led altera seu estado. Utiliza o pino 0 como entrada, e a função alternar.
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);
const int pinBotao = 0;

void setup() 
{
  pinMode(pinBotao, INPUT_PULLUP);  //Declara o pino 0 como entrada de dados.
}

void loop() 
{
  ledA.update();

  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnteriorBotao = 1;

  if(!estadoAtualBotao && estadoAnteriorBotao)
    {
      ledA.alternar();
    }
     estadoAnteriorBotao = estadoAtualBotao;
  
}