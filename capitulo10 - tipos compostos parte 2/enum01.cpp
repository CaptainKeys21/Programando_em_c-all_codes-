//enum01.cpp
#include <iostream>
using namespace std;
int main()
{
    enum {azul, preto, vermelho, verde};
    int cod_cor;
    cout << "Digite o código da cor (de 0 a 3): ";
    cin >> cod_cor;
    switch (cod_cor)
    {
        case azul:
            cout << "Azul" << endl;
            break;
        
        case preto:
            cout << "Preto" << endl;
            break;

        case vermelho:
            cout << "Vermelho" << endl;
            break;

        case verde:
            cout << "Verde" << endl;
            break;
    }
    return 0;
}