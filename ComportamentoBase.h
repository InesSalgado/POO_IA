//
// Created by Ines Salgado on 11/12/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_COMPORTAMENTOBASE_H
#define TRABALHOPRATICOPOO_M1_COMPORTAMENTOBASE_H



class Formiga;
class Mundo;

class ComportamentoBase {
    virtual void Accao(Formiga*, Mundo* )=0;
};


#endif //TRABALHOPRATICOPOO_M1_COMPORTAMENTOBASE_H
