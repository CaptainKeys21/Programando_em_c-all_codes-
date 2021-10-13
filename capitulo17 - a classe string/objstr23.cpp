//objstr23.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Software");
    cout << "Antes de erase()" << endl;
    cout << "Comprimento: " << s1.size() << " Conteúdo: " << s1 << endl;
    s1.erase(1,2);
    cout << "Depois de erase()" << endl;
    cout << "Comprimento: " << s1.size() << " Conteúdo: " << s1 << endl << endl;
    string s2("Software");
    cout << "Antes de clear()" << endl;
    cout << "Comprimento: " << s1.size() << " Conteúdo: " << s2 << endl;
    s2.clear();
    cout << "Depois de clear()" << endl;
    cout << "Comprimento: " << s2.size() << " Conteúdo: " << s2 << endl;
    bool resultado;
    resultado = s2.empty();
    if(resultado == true)
        cout << "Objeto s2 vazio" << endl;
    return 0;
}