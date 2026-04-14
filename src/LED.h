/*
Autor: Matheus Thomazini
Programa: Objeto LED
Descrição: Criacão de objeto LED
Data: 14/04/2026
Versão: 1.0
*/

#ifndef LED_h
#define LED_h


#include <Arduino.h>



class Led 
{
    private:
        uint8_t pino;
        bool estado; //atributo
        bool desligarPorTempo = false;
        uint32_t desligarNoMomento = false;

        uint32_t tempoAnteriorPiscar;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;

        void funcaoPiscar();
        void funcaoDesligamento();

    public:
        Led(uint8_t pin); //Método construtor, deverá ter o mesmo nome da classe

        void ligar();  
        void ligar(uint32_t tempoLigado_ms);

        void desligar();

        void piscar();
        void piscar(float frequencia);
        void piscar(float frequencia, uint16_t repeticoes);
        
        bool getEstado();
        uint8_t getPino();

        void setEstado(bool estado);

        void alternar();

        void update();




};


#endif