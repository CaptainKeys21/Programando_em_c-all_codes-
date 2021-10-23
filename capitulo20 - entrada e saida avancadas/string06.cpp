//string06.cpp
#include <iostream>
using namespace std;
int main()
{
    int ano;
    char nome[15];
    cout << "Digite o ano do seu nascimento: ";
    cin >> ano;
    cin.get();
    cout << "Digite seu nome completo: ";
    cin.get(nome, 15);
    cout << nome << " você nasceu em " << ano << endl;
    return 0;
}