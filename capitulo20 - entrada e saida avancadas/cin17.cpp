//cin17.cpp
#include <iostream>
using namespace std;
int main()
{
    const int klimite = 21;
    char texto[klimite];
    int qtde;
    cout << "Digite um texto, até 20 caracteres: " << endl;
    //cin.getline(texto, klimite);
    cin.get(texto, klimite);
    qtde = cin.gcount();
    cout << "Você digitou " << qtde << " caracteres" << endl;
    return 0;
}