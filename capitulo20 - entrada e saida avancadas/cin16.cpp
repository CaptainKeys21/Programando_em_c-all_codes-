//cin16.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char texto[20], ch;
    cout << "Digite um texto, terminado com o caractere '@': " << endl;
    cin.getline(texto, 20, '@');
    cout << "O texto " << texto << " tem " << strlen(texto) << " caracteres" << endl;
    cout << "Caracteres no buffer: ";
    while ((ch = cin.get()) != '\n')
        cout << ch;
    cout << endl;
    return 0;
}