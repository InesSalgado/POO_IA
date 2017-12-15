//
// Created by Ines Salgado on 24/11/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_CELULA_H
#define TRABALHOPRATICOPOO_M1_CELULA_H


#include "ObjetosJogo.h"
#include <iostream>
using namespace std;

class Celula{
private:
    ObjetosJogo *objetoCelula;
    int PosX;
    int PosY;
public:
    Celula();
    Celula* ProcuraCelulaPedida(int x, int y);

    ObjetosJogo* getObject();
    void setObjecto(ObjetosJogo* oj);

    int getPosX()const;
    int getPosY()const;

    void setPosicaoX(int a);
    void setPosicaoY(int a);

};


#endif //TRABALHOPRATICOPOO_M1_CELULA_H
