//
// Created by Ines Salgado on 24/11/2017.
//

#include "Mundo.h"
#include "Consola.h"


Mundo::Mundo() {}

void Mundo::draw(ostream os) {
    Consola::clrscr();

    os << "o";
    for(int i = 0; i < this->tamanho*2-1;++i ){
        os << "-";
    }
    os << "o\n";

    for(int i = 0; i < this->tamanho;++i){
        for(int j = 0; j < this-> tamanho;++j){
            os << "|";
            os << this->Posicoes.at(i).at(j).getObject().getString();
        }
        os << "|\n";
        for(int j = 0;j < this -> tamanho; ++j){// linha
            os << "--";
        }
        os << "\n";
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


