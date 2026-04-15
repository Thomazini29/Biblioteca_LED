
/*
  Programa para trocar os estados do Led A e B, fazendo com que quando o A está acesso, o B está apagado e vice-versa.
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(20);  //Cria os objetos
Led ledB(40);
const int pinBotao = 0;  

void setup()
{
  pinMode(pinBotao, INPUT_PULLUP);  //Declara o pino 0 como entrada.
  ledB.setEstado(HIGH);  //Faz o Led B iniciar ligado.
}

void loop()
{
  ledA.update();
  ledB.update();

  bool estadoAtualBotao = digitalRead(pinBotao);
  static bool estadoAnteriorBotao = 1;

  if(!estadoAtualBotao && estadoAnteriorBotao)
    {
      ledA.alternar();
      ledB.alternar();
    }
     estadoAnteriorBotao = estadoAtualBotao;

}