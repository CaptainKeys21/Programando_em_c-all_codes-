//cin14.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char texto[30];
    cout << "Digite um texto terminado com o caractere '@': " << endl;
    cin.get(texto, 30, '@');        //ou cin.getline(texto, 30, '@');
    cout << "O texto " << texto << " tem " << strlen(texto) << " caracteres" << endl;
    return 0;
}