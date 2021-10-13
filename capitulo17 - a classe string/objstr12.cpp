//objstr12.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("MicroComputador");
    char strc[16];
    int qtde;
    qtde = s1.copy(strc, 10, 5);
    strc[qtde] = '\0';              //Acrescenta o caractere nulo
    cout << strc << endl;
    return 0;
}