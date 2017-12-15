//
// Created by Ines Salgado on 24/11/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_MUNDO_H
#define TRABALHOPRATICOPOO_M1_MUNDO_H

#include "Celula.h"
#include <vector>


using namespace std;


class Mundo{
    vector<vector<Celula*>>Posicoes;
    int tamanho;
public:
    Mundo();
    ~Mundo();

    void draw();
    Celula* getCelula(int x, int y);

    int getTamanho();
    void setTamanho(int t);

    bool celulaValida(int x, int y);
    bool celulaVazia(int x, int y);
};


#endif //TRABALHOPRATICOPOO_M1_MUNDO_H
