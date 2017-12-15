//
// Created by Ines Salgado on 12/12/2017.
//
#pragma once
#include <vector>
#include <iostream>
using namespace std;
#include "ObjetosJogo.h"
#include "ComportamentoBase.h"


class ObjetosJogo;
class Ninho;

class Formiga : public ObjetosJogo{
private:
    static int contaFormiga;
    int ID_Formiga;
    Celula *c;
    int RaioVisao, RaioMovimento;
    Ninho* f;
    vector<ComportamentoBase*> Comportamento;
public:
    Formiga();
    void ligaNinho(Ninho* N);
    void Mover();
    void UsarComportamentos();

    void setID(ObjetosJogo* ob);
    void setRaioMovimento(int x);
    void setRaioVisao(int x);
    void setEnergiaInicialFormiga(int ei);
    void setEnergiaAtualFormiga(int ea);
    void setCelula(Celula* c);

    Celula* getCelula();

    virtual string getString();
    int getRaioMovimento();
    int getRaioVisao();

    virtual void Iteracao();





};
