//
// Created by Ines Salgado on 24/11/2017.
//

#include "ObjetosJogo.h"

int ObjetosJogo::conta = 1;

ObjetosJogo::ObjetosJogo(){this->ID=conta++;}

void ObjetosJogo::setEinicial(int ei) {
    this->EInit=ei;
}

void ObjetosJogo::setEatual(int ea) {
    this->EAtual=ea;
}

void ObjetosJogo::ligaCelula(Celula *cel) {
    this->C=cel;
}

string ObjetosJogo::getString() {
    return std::__cxx11::string();
}

Celula* ObjetosJogo::getCelula() {
    return C;
}
