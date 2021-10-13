//objstr11.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Objeto ");
    string s2("da Classe String");
    s1.append(s2);                  //(1)
    cout << s1 << endl;
    string s3("Teste ");
    s3.append(s2, 0 ,16);           //(2)
    cout << s3 << endl;
    char strc[9] = "String-C";
    string s4("Sou um objeto, não um ");
    s4.append(strc);                //(3)
    cout << s4 << endl;
    string s5("Objeto ");
    s5.append(strc, 6);             //(4)
    cout << s5 << endl;
    string s6("Cuidado");
    s6.append(3, '!');              //(5)
    cout << s6 << endl;
    char strc1[7] = "EPROMS";
    string s7("Memória ");
    string s8(s7);
    s7.append(strc1+2, strc1+5);    //(6)
    cout << s7 << endl;
    s8.append(&strc1[2], &strc1[5]);//(7)
    cout << s8 << endl;
    return 0;
}