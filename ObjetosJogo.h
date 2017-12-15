//
// Created by Ines Salgado on 24/11/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_OBJETOSJOGO_H
#define TRABALHOPRATICOPOO_M1_OBJETOSJOGO_H

#include <iostream>


using namespace std;
class Celula;

class ObjetosJogo{
//Formigas, ninhos, migalhas

    Celula *C;
    int EInit;
    int EAtual;
    int ID;
    static int conta;
public:
    ObjetosJogo();
    virtual void Iteracao() = 0;
    virtual string getString() = 0;

    //metodos para alterar os atributos da classe ObjetosJogo

    void setEinicial(int ei);
    void setEatual(int ea);

    virtual Celula* getCelula();
    void ligaCelula(Celula*cel); //atribui uma célula ao objeto de jogo

    int getIDObjeto();
    int getEnergiaInicialObjeto();
    int getEnergiaAtualObjeto();



};


#endif //TRABALHOPRATICOPOO_M1_OBJETOSJOGO_H
