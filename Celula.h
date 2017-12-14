//
// Created by Ines Salgado on 24/11/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_CELULA_H
#define TRABALHOPRATICOPOO_M1_CELULA_H


#include "Formiga.h"
#include "ObjetosJogo.h"
//#include "Mundo.h"

class Mundo;

class Celula: public Mundo {
private:
    ObjetosJogo *objetoCelula;
    int PosX;
    int PosY;
public:
    Celula();
    ObjetosJogo* getObject();
    Celula* ProcuraCelulaPedida(int x, int y);
    void setObjecto(ObjetosJogo* oj);


    void setPosX(int x);
    void setPosY(int y);

    int getPosX()const;
    int getPosY()const;

};


#endif //TRABALHOPRATICOPOO_M1_CELULA_H
