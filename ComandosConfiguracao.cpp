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
    cout<<"Comando executa"<<endl;
    ifstream is;
    is.open("C:\\Users\\Ines Salgado\\Dropbox\\Andreia_Ines\\POO\\ComandosConfiguracao");
    if(!is){
        cout << "Nao foi possivel abrir o ficheiro para configuracao automatica!" <<endl;
        return;
    }
    string comandoLido, linha;
    int valor;
    for(int i=0; i<is.end; i++){
        getline(is, linha);
        do{
            is >> comandoLido >> valor;
        }while (!'\n');
    }


    is.close();


}

void ComandosConfiguracao::inicio() {
    cout<<"Iniciar Simulacao"<<endl;

}
