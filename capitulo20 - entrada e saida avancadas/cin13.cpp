//cin13.cpp
#include <iostream>
using namespace std;
int main()
{
    int cont = 0;
    char ch;
    cout << "Digite uma frase e pressione Enter: " << endl;
    cin.get(ch);                //ou ch = cin.get();
    while (cin.eof() == false)  //ou while (ch != EOF)
    {
        cont++;
        cout << ch;
        cin.get(ch);            //ou ch = cin.get();
    }
    cout << endl;
    cout << "Foram digitados " << cont << " caracteres" << endl;
    return 0;
}
//Para encerrar o programa pressione Ctrl+Z e Enter