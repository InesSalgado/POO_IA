//
// Created by Ines Salgado on 24/11/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_OBJETOSJOGO_H
#define TRABALHOPRATICOPOO_M1_OBJETOSJOGO_H

#include <iostream>


using namespace std;
class Celula;
class Formiga;

class ObjetosJogo{
//Formigas, ninhos, migalhas

    Celula *c;
    int EInit;
    int EAtual;
    int ID;
    static int conta;
public:
    ObjetosJogo();
    virtual void Iteracao();
    virtual string getString();

    void setEinicial(int ei);
    void setEatual(int ea);


    virtual Celula* getCelula();
    virtual Celula* setCelula(Celula * c);

    int getIDObjeto();
    int getEnergiaInicialObjeto();
    int getEnergiaAtualObjeto();





};


#endif //TRABALHOPRATICOPOO_M1_OBJETOSJOGO_H
