//cin05.cpp
#include <iostream>
using namespace std;
int main()
{
    int idade = 0;
    cout << "Digite sua idade: ";
    cin >> idade;
    if(idade == 0)
        cout << "Erro de leitura. Dados inválidos." << endl;
    else
        cout << "Você tem " << idade << " anos de idade" << endl;
    return 0;
}
