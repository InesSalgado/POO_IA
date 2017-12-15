//
// Created by Ines Salgado on 11/12/2017.
//

#ifndef TRABALHOPRATICOPOO_M1_COMANDOSCONFIGURACAO_H
#define TRABALHOPRATICOPOO_M1_COMANDOSCONFIGURACAO_H

#include <iostream>
#include <sstream>
#include <string>
#include "Mundo.h"

using namespace std;

class ComandosConfiguracao {
public:
    void defmundo(int limite, Mundo*m);
    void defen(int energia);
    void defpc(int valor);
    void defvt(int valor);
    void defmi(int percentagem);
    void defme(int energia);
    void defnm(int max);
    void executa();
    void inicio();
};


#endif //TRABALHOPRATICOPOO_M1_COMANDOSCONFIGURACAO_H
