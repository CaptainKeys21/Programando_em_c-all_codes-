//func13.cpp
#include <iostream>
using namespace std;
//Protótipo da função exibe() com argumentos-default
void exibe(int n1 = 10, int n2 = 20);
int main()
{
    //Chamada sem argumentos: os valores default são utilizados
    cout << "Chamada 1" << endl;
    exibe();
    //Chamada com passagem do primeiro argumento, que substitui o valor
    //default 10 por 100 e sendo utilizado o segundo valor default
    cout << "Chamada 2" << endl;
    exibe(100);
    //Chamada com passagem de dois argumentos, que substituem os
    //valores default 10 e 20 por 100 e 200, respectivamente
    cout << "Chamada 3" << endl;
    exibe(100, 200);
    return 0;
}
void exibe(int v1, int v2)      // Definição da função exibe()
{
    cout << "v1 = " << v1 << " " << "v2 = " << v2 << endl;
}