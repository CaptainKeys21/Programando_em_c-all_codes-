//objstr13.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int retorno;
    string s1("abcd");
    string s2("abcd");
    retorno = s1.compare(s2);
    if (retorno == 0)
        cout << "Objetos iguais" << endl;
    string s3("CasaVerde");
    string s4("Casa");
    retorno = s3.compare(0, 4, s4);
    if (retorno == 0);
        cout << "Parte de s3 é igual a s4" << endl;
    string s5("A face oculta");
    string s6("A inteface visual");
    retorno = s5.compare(2, 4, s6, 6, 4);
    if (retorno == 0)
        cout << "Parte de s5 é igual à parte de s6" << endl;
    string s7("ABC123");
    char strc[] = "ABC123";
    retorno = s7.compare(strc);
    if (retorno == 0)
        cout << "Objeto string igual ao string-C" << endl;
    string s8("ABC-123-456");
    retorno = s8.compare(4, 3, strc, 3, 3);
    if (retorno == 0)
        cout << "Parte de 8 é igual à parte do string-C" << endl;
    return 0;
}