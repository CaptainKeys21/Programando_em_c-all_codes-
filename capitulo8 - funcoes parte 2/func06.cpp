//func06.cpp
#include <iostream>
using namespace std;
void somar(int, int);           //Protótipo da função somar()
int main()
{
    int valor = 10;
    //chama a função somar() com os argumentos reais valor e 30
    somar(valor, 30);
    cout << "Argumento real valor: " << valor << endl;
    return 0;
}
void somar(int val1, int val2)  //Definição da função somar()
{
    cout << "Argumento formal val1: " << val1 << endl;
    cout << "Argumento formal val2: " << val2 << endl;
    val1 = val1 + 40;
    cout << "Novo valor de val1: " << val1 << endl;
}