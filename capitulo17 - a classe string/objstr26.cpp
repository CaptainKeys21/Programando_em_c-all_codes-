//objstr26.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Leitura com getline()
    string nome1;
    cout << "Digite seu nome completo: ";
    getline(cin, nome1);
    cout << nome1 << endl;
    //Leitura com getline() delimitada
    string nome2;
    char delimit = '$';
    cout << "Digite seu nome completo, terminando com '$': ";
    getline(cin, nome2, delimit);       //Ou getline(cin, nome2, '$');
    cout << nome2 << endl;
    //Leitura com cin >>
    string nome3;
    cout << "Digite seu nome completo: ";
    cin >> nome3;
    cout << nome3 << endl;
    return 0;
}