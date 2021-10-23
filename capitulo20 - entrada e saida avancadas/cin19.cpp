//cin19.cpp
#include <iostream>
using namespace std;
int main()
{
    char nome[20];
    cout << "Digite seu nome: ";
    cin.width(11);      //ou cin >> setw(11);
    cin >> nome;
    cout << "Olá " << nome << endl;
    return 0;
}