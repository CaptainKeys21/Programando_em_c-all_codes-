//cout22.cpp
#include <iostream>
using namespace std;
int main()
{
    int valor1 = 10;
    //Passa a exibir valores em hexadecimal
    cout.setf(ios_base :: hex, ios_base :: basefield);
    cout << "HEXADECIMAL: " << valor1 << endl;
    //Passa a exibir valores em octal
    cout.setf(ios_base :: oct, ios_base :: basefield);
    cout << "OCTAL: " << valor1 << endl;
    //Passa a exibir valores em decimal
    cout.setf(ios_base :: dec, ios_base :: basefield);
    cout << "DECIMAL: " << valor1 << endl;
    return 0;
}