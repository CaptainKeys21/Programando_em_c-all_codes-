//objstr01.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char stringc[9] = "String-C";
    string s1("Objeto String");     //Criação de um objeto string, inicializando com uma constante string-C
    string s2, s3;                  //Criação de dois objetos string, com comprimento 0
    s2 = stringc;                   //Atribuição de um string-C a um objeto string
    s3 = s1;                        //Atribuição de um objeto string a outro
    cout << s2 << endl;
    cout << s3 << endl;
    string s4(stringc);             //Criação de um objeto string com inicialização a partir de um string-C
    string s5(s1);                  //Criação de um objeto string com inicialização a partir de outro objeto string
    cout << s4 << endl;
    cout << s5 << endl;
    string s6;
    char letra = 'Z';
    s6 = letra;                     //Atribuição de uma variável do tipo char a um objeto string
    cout << s6 << endl;
    s6 = 'W';                       //Atribuição de uma constante do tipo char a um objeto string
    cout << s6 << endl;
    return 0;
}