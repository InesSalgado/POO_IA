//
// Created by Ines Salgado on 12/12/2017.
//
#pragma once
#include <vector>
#include <iostream>

#include "ObjetosJogo.h"
#include "ComportamentoBase.h"
#include "Ninho.h"
#include "Celula.h"

using namespace std;

class Formiga: public ObjetosJogo{
private:
    static int contaFormiga;
    int ID_Formiga;
    Celula *c;
protected:
    int RaioVisao, RaioMovimento;
    Ninho* f;
    vector<ComportamentoBase*> Comportamento;
public:
    Formiga();
    void ligaNinho(Ninho* N);
    void Mover();
    void UsarComportamentos();

    void setID(ObjetosJogo* ob);
    void setEnergiaInicialFormiga(int ei);
    void setEnergiaAtualFormiga(int ea);

    void setCelula(Celula* c);
    virtual Celula* getCelula();

    virtual void Iteracao();
    virtual string getString();

    int getRaioMovimento();
    void setRaioMovimento(int x);
};
