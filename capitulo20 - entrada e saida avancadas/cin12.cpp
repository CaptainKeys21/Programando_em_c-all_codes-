//cin12.cpp
#include <iostream>
using namespace std;
int main()
{
    int cont = 0;
    char ch;
    cout << "Digite uma frase e pressione Enter: " << endl;
    cin >> ch;
    while (ch != '\n')
    {
        cont++;
        cout << ch;
        cin >> ch;
    }
    cout << endl;
    cout << "Foram digitados " << cont << " caracteres" << endl;
    return 0;
}
//Pelo fato do comando "cin >>" ignorar espaços o caractere '\n' jamais será atribuido a
//variável "ch" causando um loop infinito. Pressione Ctrl+C para encerrar o programa