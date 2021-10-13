//objstr15.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int posic;
    string s1("classe-string-objeto-string");
    string s2("string");
    posic = s1.rfind(s2);
    cout << "s2 encontrado na posição " << posic << " de s1" << endl;
    posic = s1.rfind("ring", 20);
    cout << "'ring' encontrado na posição " << posic << " de s1" << endl;
    char strc[8] = "-string";
    posic = s1.rfind(strc, 26, 3);
    cout << "Parte de strc encontrada na posição " << posic << " de s1" << endl;
    posic = s1.rfind('-', 12);
    cout << "Caractere encontrado na posição " << posic << " de s1" << endl;
    return 0;
}