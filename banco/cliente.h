#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Cliente {
    private:
        string nome;
        int idade;

    public:
        string getNome(){
            return nome;
        }

        void setNome (string n) {
            nome = n;
        }  

        int getIdade() {
            return idade;
        } 

        void setIdade(int i) {
            idade = i;
        }
};