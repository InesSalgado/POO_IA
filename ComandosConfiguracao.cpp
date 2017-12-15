//
// Created by Ines Salgado on 11/12/2017.
//
#include <fstream>
#include <cstring>
#include "ComandosConfiguracao.h"
#include "Mundo.h"
#include "Ninho.h"
#include "Formiga.h"
class Mundo;
class Ninho;
class Formiga;

void ComandosConfiguracao::defmundo(int limite, Mundo*m) {
    cout<<"comando defmundo"<<endl;
    m->setTamanho(limite);
}

void ComandosConfiguracao::defen(int energia) {
    cout<<"comando defen"<<endl;
    Ninho* n;
    n->setEnergiaInicialNinho(energia);
}

void ComandosConfiguracao::defpc(int valor) {
    cout<<"Comando defpc"<<endl;
    Ninho* n;
    n->setPercentagem(valor);
}

void ComandosConfiguracao::defvt(int valor) {
    cout<<"Comando defvt"<<endl;
    Ninho* n;
    n->setEnergiaEntreNinhoFormiga(valor);
}
//defmi, defme, defnm nao implementadas pois nao se consideram migalhas
void ComandosConfiguracao::defmi(int percentagem) {
    cout<<"Comando defmi"<<endl;

}

void ComandosConfiguracao::defme(int energia) {
    cout<<"Comando defme"<<endl;
}

void ComandosConfiguracao::defnm(int max) {
    cout<<"Comando defnm"<<endl;
}

void ComandosConfiguracao::executa() {
    cout << "Comando executa" << endl;
    Mundo *m = new Mundo();
    ifstream is;
    is.open("C:\\Users\\Ines Salgado\\Dropbox\\Andreia_Ines\\POO\\ComandosConfiguracao.txt");

    if (!is) {
        cout << "Nao foi possivel abrir o ficheiro para configuracao automatica!" << endl;
        return;
    }
    string comandoLido, linha;
    int valor;
    cout << "Entrar no ciclo" << endl;
    for (int i = 0; i < is.end; i++) {
        cout << "ler linha" << endl;
        //getline(is,linha);
        getline(is, comandoLido);
       do {
            cout << "Do" << endl;
            //getline(is, comandoLido);
            if (comandoLido == "defmundo") {
                cout << "***" << endl;
                ComandosConfiguracao::defmundo(valor, m);
                cout << "+++" << endl;
            } else if (comandoLido == "defen") {
                cout << "Comando defen lido" << endl;
                ComandosConfiguracao::defen(valor);

            } else if (comandoLido == "defpc") {
                ComandosConfiguracao::defpc(valor);

            } else if (comandoLido == "defvt") {
                ComandosConfiguracao::defvt(valor);

            }

        }while (!is.end);
    }


    is.close();
}

void ComandosConfiguracao::inicio() {
    cout<<"Iniciar Simulacao"<<endl;

}
