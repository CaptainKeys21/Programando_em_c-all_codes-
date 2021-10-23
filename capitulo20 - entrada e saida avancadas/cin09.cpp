//cin09.cpp
#include <iostream>
using namespace std;
int main()
{
    int idade = 0;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (cin.fail())
        cout << "Erro de leitura. Dados inválidos." << endl;
    else
        cout << "Você tem " << idade << " anos de idade" << endl;
    cin.clear();
    cout << "Caracteres no buffer: ";
    char caract;
    while((caract = cin.get()) != '\n')
        cout << caract << " ";
    cout << endl;
    return 0;
}