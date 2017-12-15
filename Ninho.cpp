//
// Created by Ines Salgado on 24/11/2017.
//

#include "Celula.h"
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

}

//Formiga Ninho::criarF() {
//    Formiga* f = new Formiga();
//    Formigas.push_back(f);
//}

//Formiga Ninho::AddFormiga(Formiga* f) {
//    Formigas.push_back(f);
//}

string Ninho::getString() {
    return "N";
}

void Ninho::setID(ObjetosJogo *ob) {
    this->ID_Ninho=ob->getIDObjeto();
}

bool Ninho::verificaEnergiaNinho() {
    if(this->getEnergiaAtualObjeto()>valorCriar && Ninho::verificaFormigasNinho()==0) {
        return 1;
    }else
        return 0;
}

bool Ninho::verificaFormigasNinho() {
    return false;
}

void Ninho::setPercentagem(int n) {
    this->percentagemCriarFormiga=n;
}

void Ninho::setEnergiaEntreNinhoFormiga(int v) {
    this->valorEnergiaEntreNinhoEFormiga=v;
}








