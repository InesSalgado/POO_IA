//
// Created by Ines Salgado on 12/12/2017.
//

#include "Formiga.h"
static int contaFormigas = 0;

void Formiga::setID(ObjetosJogo *ob) {
    this->ID_Formiga=ob->getIDObjeto();
}

void Formiga::ligaNinho(Ninho *N) {
    f=N;
}
Formiga::Formiga(){
    contaFormigas=contaFormigas++;
}

void Formiga::Mover() {

}

void Formiga::UsarComportamentos() {

}

void Formiga::Iteracao() {

}

//SETS
void Formiga::setCelula(Celula* C) {
    this->c=C;
}
void Formiga::setRaioMovimento(int x) {
    this->RaioMovimento=x;
}

void Formiga::setRaioVisao(int x) {
    this->RaioVisao=x;
}
void Formiga::setEnergiaInicialFormiga(int ei) {
    this->setEinicial(ei);
}

void Formiga::setEnergiaAtualFormiga(int ea) {
    this->setEatual(ea);
}

//GETS

int Formiga::getRaioVisao() {
    return this->RaioVisao;
}
Celula* Formiga::getCelula() {
    return this->c;
}
int Formiga::getRaioMovimento() {
    return this->RaioMovimento;
}
string Formiga::getString() {
    return "F";
}

