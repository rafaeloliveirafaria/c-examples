#include <iostream>
#include "banco.h"
using namespace std;

class Menu
{
private:
    int menu = 5;
    Banco banco;
    void awaitAction()
    {
        system("pause");
        system("CLS");
    }

    void menuPrincipal()
    {
        switch (menu)
        {
        case 1:
            system("CLS");
            cout << "\n | 1 - Abrir conta | \n";
            banco.abrirConta();
            break;
        case 2:
        system("CLS");
            cout << "\n | 2 - Deposito | \n";
            banco.deposito();
            break;
        case 3:
        system("CLS");
            cout << "\n | 3 - Levantamento | \n";
            banco.levantamento();
            break;
        case 4:
        system("CLS");
            cout << "\n | 4 - Transferencia | \n";
            banco.transferencia();
            break;
        case 0:
        system("CLS");
            cout << "\n | 0 - Sair | \n";
            menu = -1;
            break;
        default:
            menu = 5;
            break;
        }
        awaitAction();
    }

    void showOptions()
    {
        cout << "Escolha uma opcao\n";
        cout << "1 - Abrir conta\n";
        cout << "2 - Deposito\n";
        cout << "3 - Levantamento\n";
        cout << "4 - Transferencia\n";
        cout << "0 - Sair\n";
        cin >> menu;
    }

public:
    void principal()
    {
        system("CLS");
        while (menu >= 0)
        {
            showOptions();
            menuPrincipal();
        }
    }
};