//objstr18.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int posic;
    string s1("Computadores");
    string s2("dor");
    posic = s1.find_first_not_of(s2);
    cout << "'C' é o primeiro caractere não encontrado em s2. Posição " << posic << endl;
    posic = s1.find_first_not_of("Compu");
    cout << "'t' é o primeiro caractere não encontrado em s1. Posição " << posic << endl;
    posic = s1.find_first_not_of("Comtador", 0,3);
    cout << "'p' é o primeiro caractere não encontrado em s1. Posição " << posic << endl;
    posic = s1.find_first_not_of('C');
    cout << "'o' é o primeiro caractere não encontrado em s1. Posição " << posic << endl;
    return 0;
}