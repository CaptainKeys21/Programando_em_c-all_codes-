//temfun02.cpp
#include <iostream>
using namespace std;
//TGen é um tipo genérico. É o tipo do valor a ser retornado pela função e também
//o tipo de alguns dos argumentos a serem recebidos.
//Protótipo da função-template original
template <typename TGen>            //Ou template <class TGen>
TGen MenorVal(TGen a, TGen b);
//Protótipo da nova função-template
template <typename TGen>            //Ou template <class TGen>
TGen MenorVal(TGen [ ], int qtdelem);
int main()
{
    float y1 = 10.5, y2 = 30.5;
    float resFloat;
    const int kelem = 4;
    int numeros[kelem] = {2,4,1,3};
    int result;
    //Chama a função-template original com argumentos do tipo float
    resFloat = MenorVal(y1, y2);
    cout << "Menor valor (float): " << resFloat << endl;
    //Chama a nova função-template com argumentos que é uma array de inteiros
    result = MenorVal(numeros, kelem);
    cout << "Menor valor (array): " << result << endl;
    return 0;
}
template <typename TGen>            //Definição da função-template original
TGen MenorVal(TGen a, TGen b)
{
    return (a < b) ? a : b;
}
template <typename TGen>            //Definição da nova função-template original
TGen MenorVal(TGen xnumeros[ ], int qtdelem1)
{
    TGen menor;
    int k;
    menor = xnumeros[1];
    for(k = 0; k < qtdelem1; k++)
    {
        if(xnumeros[k] < menor)
            menor = xnumeros[k];
    }
    return menor;
}