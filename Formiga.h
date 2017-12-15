//
// Created by Ines Salgado on 12/12/2017.
//
#pragma once
#include <vector>
#include <iostream>
#include "ComportamentoBase.h"
#include "ObjetosJogo.h"

class Ninho;


class Formiga : public ObjetosJogo {
private:
    static int contaFormiga;
    int ID_Formiga;
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
    void setRaioMovimento(int x);
    void setRaioVisao(int x);
    void setEnergiaInicialFormiga(int ei);
    void setEnergiaAtualFormiga(int ea);



    virtual void Iteracao();
    virtual string getString();

    int getRaioMovimento();
    int getRaioVisao();

};
