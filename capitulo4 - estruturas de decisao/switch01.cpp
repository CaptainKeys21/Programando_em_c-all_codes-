//switch01.cpp
#include <iostream>
using namespace std;
int main()
{
    char letra;
    cout << "Digite uma letra..." << "E direi o nome de uma linguagem: ";
    cin >> letra;
    cout << endl;
    switch (letra)  //Expressão do tipo char
    {
        case 'a':
            cout << "Ada, Assembly" << endl;
        case 'b':
            cout << "Basic" << endl;
        case 'c':
            cout << "C, C++" << endl;
        case 'p':
            cout << "Pascal, Python, PHP" << endl;
        default:
            cout << "Linguagem desconhecida" << endl;
    }
    return 0;
}