#include "cliente.h"

using namespace std;

class Conta: public Cliente{
    private:
        int conta;
        int tipoConta;
        double saldo;
        double descobertoMaximo;
        int contaInvalida(int i, int _idade){
            cout << "\nTipo de conta invalida, escolha outra conta";
            showTipoConta();
            cin >> i;
            return validaTipoConta(i, _idade);
        }
        int validaTipoConta(int i, int _idade){
            cout << "\nidade do cliente: " << _idade << "\n";
            switch (i)
            {
            case 1:
                /* Conta de servicos minimos */
                break;
            case 2:
                /* Conta estudante idade > 6 & < 27 */
                break;
            case 3:
                /* Conta aforro junior idade >= 0 & <= 6 */
                break;
            case 4:
                /* Conta investidor */
                break;
            default:
                    i = contaInvalida(i, _idade);
                break;
            }
            return i;
        }
    public:
        void showTipoConta(){
            cout << "\n | TIPO CONTA | \n";
            cout << "1 - Conta de servicos minimos\n";
            cout << "2 - Conta estudante idade (entre 6 a 27 anos)\n";
            cout << "3 - Conta aforro junior (entre 0 a 6 anos)\n";
            cout << "4 - Conta investidor\n";
        }
        int getId () {
            return conta;
        }

        int getTipoConta () {
            return tipoConta;
        }  

        double getSaldo(){
            return saldo;
        }

        double getDescoberto() {
            return descobertoMaximo;
        } 

        void setId(int i) {
            conta = i;
        }
        void setTipoConta(int i, int _idade) {
            conta = validaTipoConta(i, _idade);
        }

        void setSaldo (double s) {
            saldo = s;
        }

        void setDescoberto(double d) {
            descobertoMaximo = d;
        }

        virtual void atualizacaoMensal() {

        }
};