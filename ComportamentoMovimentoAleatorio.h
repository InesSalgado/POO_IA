//
// Created by Ines Salgado on 14/12/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_COMPORTAMENTOMOVIMENTOALEATORIO_H
#define TRABALHOPRATICOPOO_M1_COMPORTAMENTOMOVIMENTOALEATORIO_H


#include "ComportamentoBase.h"

class Formiga;
class ComportamentoMovimentoAleatorio : public ComportamentoBase{
    void Accao(Formiga *F, Mundo *M);
};


#endif //TRABALHOPRATICOPOO_M1_COMPORTAMENTOMOVIMENTOALEATORIO_H
