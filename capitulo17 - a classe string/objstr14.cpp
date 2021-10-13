//objstr14.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int posic;
    char strc[11] = "com vírus";
    string s1("Computador com vírus");
    string s2("dor");
    posic = s1.find(s2);
    cout << "s2 encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find(strc, 2);
    cout << "strc encontrado na posição" << posic << " de s1" << endl;
    posic = s1.find(strc, 0, 3);
    cout << "Parte de strc encontrada na posição " << posic << " de s1" << endl;
    posic = s1.find('v');
    cout << "Caractere encontrado na posição " << posic << " de s1" << endl;
    return 0;
}