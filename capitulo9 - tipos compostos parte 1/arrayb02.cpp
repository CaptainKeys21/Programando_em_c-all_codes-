//arrayb02.cpp
#include <iostream>
using namespace std;
int main()
{
    int j, k;
    int valores[3][2];
    //atribuição de valores
    for(j = 0; j < 3; j++)      //for extremo
        for(k = 0; k < 2; k++)  //for interno
        {
            cout << "Digite o valor do elemento " << j << " " << k << ": ";
            cin >> valores[j][k];
        }
    //exibição de valores
    for(j = 0; j < 3; j++)      //for extremo
        for(k = 0; k < 2; k++)  //for interno
            cout << valores[j][k] << " ";
    cout << endl;
    return 0;
}