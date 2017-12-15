//
// Created by Ines Salgado on 24/11/2017.
//

#include "Celula.h"
#include "Mundo.h"



Celula::Celula() {}

ObjetosJogo* Celula::getObject() {
    return this->objetoCelula;
}

void Celula::setObjecto(ObjetosJogo *oj) {
    this->objetoCelula = oj;

}

void Celula::setPosX(int x) {
    this->PosY=x;
}

void Celula::setPosY(int y) {
    this->PosX=y;
}

int Celula::getPosX() {
    return this->PosX;
}
int Celula::getPosY() {
    return this->PosY;
}
