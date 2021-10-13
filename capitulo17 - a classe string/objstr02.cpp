//objstr02.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Micro");
    s1 += "Computador";             //Concatenação de uma constante string-C com um objeto string
    cout << "Concatenação 1: ";
    cout << s1 << endl;
    string s2("Poli");
    string s3("Morfismo");
    s2 += s3;                       //Concatenação de dois objetos string
    cout << "Concatenação 2: ";
    cout << s2 << endl;
    s2 += "?";                      //Concatenação de uma constante do tipo char com um objeto string
    cout << "Concatenação 3: ";
    cout << s2 << endl;
    string s4;
    s4 = s1 + "/" + s2 + "/" + s3;  //Concatenação múltipla de objetos string e constantes string-C
    cout << "Concatenação 4: ";
    cout << s4 << endl;
    return 0;
}