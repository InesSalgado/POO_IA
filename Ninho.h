//
// Created by Ines Salgado on 24/11/2017.
//
#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "ObjetosJogo.h"



class Formiga;


class Ninho : public ObjetosJogo {
    int ID_Ninho;
    int contaNinhos=0;
    int percentagemCriarFormiga;
    double valorCriar=percentagemCriarFormiga*getEnergiaInicialObjeto();
    int valorEnergiaEntreNinhoEFormiga;

    vector<Formiga*> Formigas;

public:
    //Formiga criarF();
    //Formiga AddFormiga(Formiga*f);

    void setEnergiaInicialNinho(int ei);
    void setEnergiaAtualNinho(int ea);
    void setPosicao(Celula* c, int x, int y);
    void setID(ObjetosJogo* ob);
    void setPercentagem(int n);
    void setEnergiaEntreNinhoFormiga(int v);

    bool verificaEnergiaNinho();
    bool verificaFormigasNinho();


    Ninho();
    virtual~Ninho();
    virtual string getString();

};


