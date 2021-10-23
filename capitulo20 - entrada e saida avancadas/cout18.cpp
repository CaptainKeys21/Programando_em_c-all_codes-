//cout18.cpp
#include <iostream>
using namespace std;
int main()
{
    int valor1 = 10;
    //Passa a exibir valores em hexadecimal
    cout << hex << "Valores hexadecimais" << endl;
    cout << "Sem showbase: " << valor1 << endl;
    cout.setf(ios_base :: showbase);
    cout << "Com showbase: " << valor1 << endl;
    return 0; 
}