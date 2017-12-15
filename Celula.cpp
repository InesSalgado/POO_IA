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

int Celula::getPosX() const {
    return this->getPosX();
}

int Celula::getPosY() const {
    return this->getPosY();
}

void Celula::setPosicaoY(int a) {
    this->PosX=a;
}

void Celula::setPosicaoX(int a) {
    this->PosY=a;
}

/* Celula *Celula::ProcuraCelulaPedida(int x, int y) {
    for(int i=0; i<; i++ ){
        for(int j=0; i<; i++){
            if(i==x && j==y){}

        }
    }
}*/
