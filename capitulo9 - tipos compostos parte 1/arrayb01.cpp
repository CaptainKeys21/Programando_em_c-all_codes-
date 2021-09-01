//arrayb01.cpp
#include <iostream>
using namespace std;
int main()
{
    int j, k;
    int num = 0;
    int valores[4][3];
    //atribuição de valores
    for(j = 0; j < 4; j++)      //for externo
        for(k = 0; k < 3; k++)  //for interno
        {
            num++;
            valores[j][k] = num;
        }
    //exibição de valores
    for(j = 0; j < 4; j++)      //for externo
        for(k = 0; k < 3; k++)  //for interno
            cout << valores[j][k] << " ";
    cout << endl;
    return 0;
}