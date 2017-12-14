//
// Created by Ines Salgado on 12/12/2017.
//

#include "Formiga.h"
static int contaFormigas = 0;
void Formiga::setID(ObjetosJogo *ob) {
    this->ID_Formiga=ob->ID;
}

void Formiga::ligaNinho(Ninho *N) {
    f=N;
}
Formiga::Formiga(){
    contaFormigas=contaFormigas++;
}

void Formiga::setEnergiaInicialFormiga(int ei) {
    this->setEinicial(ei);
}

void Formiga::setEnergiaAtualFormiga(int ea) {
    this->setEatual(ea);
}

void Formiga::setPosicaoFormiga(Celula* c) {
    this->C = c;
    c->setObjecto(this);
}


void Formiga::Mover() {

}

void Formiga::UsarComportamentos() {

}

virtual void Formiga::Iteracao() {
    ObjetosJogo::Iteracao();
}

string Formiga::getString() {
    return "F";
}
