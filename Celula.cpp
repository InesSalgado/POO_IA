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

Celula *Celula::ProcuraCelulaPedida(int x, int y) {
    for(int i=0; i<Mundo::tamanho; i++ ){
        for(int j=0; i<Mundo::tamanho; i++){
            if(i==x && j==y){}

        }
    }
}
