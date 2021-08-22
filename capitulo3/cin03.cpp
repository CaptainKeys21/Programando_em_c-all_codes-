//cin03.cpp
#include <iostream>
using namespace std;
int main()
{
    char caract;
    int cont = 0;
    cout << "Digite uma sequência de caracteres terminada por '$': " << endl;
    caract = cin.get();
    while (caract != '$')
    {
        cont++;
        caract = cin.get();
    }
    cout << endl << "Foram digitados " << cont << " caracteres" << endl;
    return 0;
}