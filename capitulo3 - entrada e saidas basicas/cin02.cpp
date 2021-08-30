//cin02.cpp
#include <iostream>
using namespace std;
int main()
{
    char caract;
    int cont = 0;
    cout << "Digite uma sequência de caracteres terminado em '$': " << endl;
    cin >> caract;
    while (caract != '$')
    {
        cont++;
        cin >> caract;
    }
    cout << "Foram digitados " << cont << " caracteres" << endl;
    return 0;
}