//string04.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char nome[11];
    int qtd_car;
    const int kcomp = 11;
    cout << "Digite seu nome completo: ";
    cin.get(nome, kcomp);       //ou cin.getline(nome, kcomp);
    qtd_car = strlen(nome);
    cout << "Seu nome tem " << qtd_car << " caracteres" << endl;
    return 0;
}