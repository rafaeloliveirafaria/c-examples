#include <iostream>
#include <string>
#include <vector>
#include "conta.h"

using namespace std;

class Banco {
    private:
        int controlNewConta;
        vector<Conta*> contas = {};
        void _abrirConta(){
            Conta* co1 = new Conta();
            
            int idade;
            string nome;
            int tipoConta;
            
            cout << "\n Informe nome \n" << endl;
            cin >> nome;
            cout << "\n Informe idade \n" << endl;
            cin >> idade;
            cout << "\n Informe tipo da conta \n" << endl;
            co1->showTipoConta();
            cin >> tipoConta;

            co1->setId(idade);
            co1->setNome(nome);
            co1->setId(controlNewConta++);
            co1->setTipoConta(tipoConta, idade);
            
            contas.push_back(co1);
        }
    public:
        Banco() {
            controlNewConta = 1000;
        }
        void controleConta(){
            cout << "controlConta: " << controlNewConta << "\n";
        }
        void abrirConta() {
            _abrirConta();
            cout << "\nContas: " << contas.size() << "\n";
            controleConta();
        }
        void deposito() {
            controleConta();
        }
        void levantamento() {
            controleConta();
        }
        void transferencia() {
            controleConta();
        }
};