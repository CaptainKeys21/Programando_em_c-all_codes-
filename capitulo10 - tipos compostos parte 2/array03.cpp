//array03.cpp
#include <iostream>
using namespace std;
int somar(const int []);    //Protótipo da função somar()
const int kelem = 6;        //Constante simbólica externa
int main()
{
    int pares[kelem] = {2, 4, 6, 8, 10, 12};
    int result;
    result = somar(pares);
    cout << "Somatório: " << result << endl;
    return 0;
}
int somar(const int xpares[])//Definição da função somar()
{
    int k;
    int soma = 0;
    for (k = 0; k < kelem; k++)
        soma = soma + xpares[k];
    return soma;
}