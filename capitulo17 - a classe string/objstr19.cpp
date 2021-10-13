//objstr19.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int posic;
    string s1("Computadores");
    string s2("dor");
    posic = s1.find_last_not_of(s2);
    cout << "'s' é o último caractere não encontrado em s2. Posição " << posic << endl;
    posic = s1.find_last_not_of("res");
    cout << "'o' é o último caractere não encontrado em s1. Posição " << posic << endl;
    posic = s1.find_last_not_of("dores", 11, 5);
    cout << "'a' é o último caractere não encontrado em s1. Posição " << posic << endl;
    posic = s1.find_last_not_of('s');
    cout << "'e' é o último caractere não encontrado em s1. Posição " << posic << endl;
    return 0;
}