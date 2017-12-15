//
// Created by Ines Salgado, Andreia Lopes
//

#include <time.h>
#include "main.h"

char menuConfig() {
    char opcao;

    cout << "Bem-vindo(a) a Configuracao" <<endl<<endl;
    cout << " A) Configuracao Automatica (carregar ficheiro)" <<endl;
    cout << " M) Configuracao Manual (introduzir comandos)"<<endl;
    cout << "Introduza uma das opcoes: ";
    cin >> opcao;
    return opcao;
}

char menuSimul(Mundo *pMundo) {
    pMundo->draw();
    char comando;
    cout << "Bem-vindo(a) a Simulacao" <<endl<<endl;
    cout << "Introduza um comando";
    cin >> comando;
    return comando;
}

int main() {
    srand(time(NULL));
    cout<< "Simulacao da vida das formigas" << endl;
    cout<<"--------------------------------" <<endl<<endl;
    menuConfig();

    ComandosConfiguracao * Comandos = new ComandosConfiguracao();
    Mundo* m = new Mundo();
    string Comando;
    int valor; //Variavel introduzida pelo utilizador


    int opcao=menuConfig();
    switch (opcao) {
        case 'A': Comandos->executa("ComandosConfiguracao.txt");
            break;

        case 'M':
            do {
                cout << "Introduza o comando: ";
                cin >> Comando;

                if(Comando.compare("defen")==1){
                    cout<<"Qual o limite? ";
                    cin >> valor;
                    Comandos->defen(valor);

                } else if(Comando.compare("defpc")==1){
                    cout<<"Qual a energia? ";
                    cin >> valor;
                    Comandos->defen(valor);

                } else if(Comando.compare("defvt")==1){
                    cout<<"Qual o valor? ";
                    cin >> valor;
                    Comandos->defen(valor);

                } else if(Comando.compare("defmi")==1){
                    cout<<"Qual a percentagem? ";
                    cin >> valor;
                    Comandos->defen(valor);

                } else if(Comando.compare("defme")==1){
                    cout<<"Qual ? ";
                    cin >> valor;
                    Comandos->defen(valor);

                } else if(Comando.compare("defnm")==1){
                    cout<<"Comando defnm"<<endl;
                }

            }while(Comando.compare("inicio")==0);

            menuSimul(m);
    }



    system("pause");
    return 0;
}

