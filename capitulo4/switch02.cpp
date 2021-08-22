//switch02.cpp
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
        case 'A':
            cout << "Ada, Assembly" << endl;
            break;
        case 'b':
        case 'B':
            cout << "Basic" << endl;
            break;
        case 'c':
        case 'C':
            cout << "C, C++" << endl;
            break;
        case 'p':
        case 'P':
            cout << "Pascal, Python, PHP" << endl;
            break;
        default:
            cout << "Linguagem desconhecida" << endl;
            break;
    }
    return 0;
}