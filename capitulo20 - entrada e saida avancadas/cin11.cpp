//cin11.cpp
#include <iostream>
using namespace std;
int main()
{
    int cont = 0;
    char ch;
    cout << "Digite uma frase e pressione Enter: " << endl;
    cin.get(ch);                //ou ch = cin.get();
    while (ch != '\n')
    {
        cont++;
        cout << ch;
        cin.get(ch);            //ou ch = cin.get();
    }
    cout << endl;
    cout << "Foram digitados " << cont << " caracteres" << endl;
    return 0;
}