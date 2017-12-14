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
