//bloco01.cpp
#include <iostream>
using namespace std;
int main()
{
    int codigo1 = 100;
    {       //Início do Bloco
        int codigo2 = 200;
        cout << "Codigo1 (no bloco) = " << codigo1 << endl;
        cout << "Codigo2 (no block) = " << codigo2 << endl;
    }       //Fim do Bloco
    cout << "Codigo1 (fora do bloco) = " << codigo1 << endl;
    //cout << "Codigo2 (fora do bloco) = " << codigo2 << endl;
    return 0;
}