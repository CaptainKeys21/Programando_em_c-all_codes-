//cout19.cpp
#include <iostream>
using namespace std;
int main()
{
    int valor1 = 44252;
    //Passa a exibir valores em hexadecimal
    cout << hex << "Valores hexadecimais" << endl;
    cout << "Sem uppercase: " << valor1 << endl;
    cout.setf(ios_base :: uppercase);
    cout << "Com uppercase: " << valor1 << endl;
    return 0;
}