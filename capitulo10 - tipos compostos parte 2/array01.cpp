//array01.cpp
#include <iostream>
using namespace std;
int somar(int [], int qtdelem);         //Protótipo da função somar()
int main()
{
    const int kelem = 6;                //Constante simbólica
    int pares[kelem] = {2, 4, 6, 8, 10, 12};
    int result;
    result = somar(pares, kelem);       //chama a função somar()
    cout << "Somatório: " << result << endl;
    return 0;
}
int somar(int xpares[], int qtdelem1)   //Definição da função somar()
{
    int k;
    int soma = 0;
    for(k = 0; k < qtdelem1; k++)
        soma = soma + xpares[k];
    return soma;
}