//
// Created by Ines Salgado on 24/11/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_MUNDO_H
#define TRABALHOPRATICOPOO_M1_MUNDO_H

#include <vector>

#include "Celula.h"

using namespace std;

class Celula;

class Mundo {
protected:
    vector<vector<Celula>> Posicoes;
    int tamanho;
public:
    Mundo();

    void draw(ostream os);
};


#endif //TRABALHOPRATICOPOO_M1_MUNDO_H
