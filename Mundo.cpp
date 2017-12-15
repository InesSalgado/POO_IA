//
// Created by Ines Salgado on 24/11/2017.
//

#include "Mundo.h"
#include "Consola.h"


Mundo::Mundo(){}

void Mundo::draw() {
    Consola::clrscr();

    cout << "o";
    for(int i = 0; i < this->tamanho*2-1;++i ){
        cout << "-";
    }
    cout << "o\n";

    for(int i = 0; i < this->tamanho;++i){
        for(int j = 0; j < this-> tamanho;++j){
            cout << "|";
            cout << this->Posicoes.at(i).at(j)->getObject()->getString();
        }
        cout << "|\n";
        for(int j = 0;j < this -> tamanho; ++j){// linha
            cout << "--";
        }
        cout << "\n";
    }

}

Celula* Mundo::getCelula(int x, int y) {
    return Posicoes[x][y];
}

bool Mundo::celulaValida(int x, int y) {
    if((x>0 && x<tamanho) && (y>0 && y<tamanho))
        return true;
    else
        return false;
}

bool Mundo::celulaVazia(int x, int y) {
    Celula* c = getCelula(x, y);
    if(c->getObject()== nullptr)
        return true;
    else
        return false;
}

int Mundo::getTamanho() {
    return this->tamanho;
}

void Mundo::setTamanho(int t) {
    this->tamanho=t;
}


