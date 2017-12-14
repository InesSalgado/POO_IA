//
// Created by Ines Salgado on 12/12/2017.
//
#pragma once
#include <vector>
#include <iostream>
using namespace std;
#include "ObjetosJogo.h"
#include "ComportamentoBase.h"
#include "Ninho.h"


class Formiga : public ObjetosJogo {
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
    void setPosicaoFormiga(Celula* c);

    virtual void Iteracao();
    virtual string getString();
    int get
};
