//
// Created by Ines Salgado on 14/12/2017.
//

#include "ComportamentoMovimentoAleatorio.h"

void ComportamentoMovimentoAleatorio::Accao(Formiga *F, Mundo *M) {
    Celula *posicaoAtual = F->getCelula();
    for(int i = 0; i < F->getRaioMovimento();++i) {
        while (true) {
            int n = rand() % 4;
            int x, y;
            x = posicaoAtual->getPosX();
            y = posicaoAtual->getPosY();
            switch (n) {
                case 0: {//norte
                    y++;
                    break;
                }
                case 1: {//sul
                    y--;
                    break;
                }
                case 2: {//este
                    x++;
                    break;
                }
                case 3: {//oeste
                    x--;
                    break;
                }
            }
            if (M->celulaValida(y, x) && M->celulaVazia(y, x)) {
                F->setCelula(M->getCelula(y, x));
                break;
            }
        }
    }
}
