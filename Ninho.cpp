//
// Created by Ines Salgado on 24/11/2017.
//

#include "Ninho.h"



Ninho::~Ninho() {}

Ninho::Ninho():ObjetosJogo() {
    this->contaNinhos=contaNinhos++;
}

void Ninho::setEnergiaInicialNinho(int ei) {
    this->setEinicial(ei);
}

void Ninho::setEnergiaAtualNinho(int ea) {
    this->setEatual(ea);
}

void Ninho::setPosicao(Celula* c, int x, int y) {
    this->C = c;
    c->setObjecto(this);
}

Formiga Ninho::criarF() {
    Formiga* f = new Formiga();
    this->AddFormiga(f);
}

Formiga Ninho::AddFormiga(Formiga* f) {
    Formigas.push_back(f);
    f->ligaNinho(this);
}

string Ninho::getString() {
    return "N";
}

void Ninho::setID(ObjetosJogo *ob) {
    this->ID_Ninho=ob->ID;
}

bool Ninho::verificaEnergiaNinho() {
    if(this->EAtual>valorCriar && Ninho::verificaFormigasNinho()==0) {
        return 1;
    }else
        return 0;
}








