//func16.cpp
#include <iostream>
using namespace std;
int mult(int, int);         //Protótipo da função mult() com 2 argumentos
int mult(int, int, int);    //Protótipo da função mult() com 3 argumentos
int main()
{
    int numero = 10;
    cout << mult(numero, 20) << endl;       //Chamada com 2 argumentos
    cout << mult(numero, 20, 30) << endl;   //Chamada com 3 argumentos
    return 0;
}
//Definição da função multi() com 2 argumentos
int mult(int n1, int n2)
{
    cout << "Função com 2 argumentos. Resultado: ";
    return n1 * n2;
}
//Definição da função mult() com 3 argumentos
int mult(int n1, int n2, int n3)
{
    cout << "Função com 3 argumentos. Resultado: ";
    return n1 * n2 * n3;
}