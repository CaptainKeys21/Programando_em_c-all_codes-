//string05.cpp
#include <iostream>
using namespace std;
int main()
{
    char nome[15];
    char esporte[10];
    cout << "Digite seu nome completo: ";
    cin.get(nome, 15);
    cin.get();              //Lê o caractere de nova linha
    cout << "Digite seu esporte favorito: ";
    cin.get(esporte, 10);
    cout << "Seu esporte favorito é " << esporte << ", " << nome << endl;
    return 0;
}