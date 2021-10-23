//cout20.cpp
#include <iostream>
using namespace std;
int main()
{
    float valor1 = 20;
    cout << "Sem showpos: " << valor1 << endl;
    cout << "Com showpos: ";
    cout.setf(ios_base :: showpos);
    cout << valor1 << endl;
    cout << "Sem showpoint: " << valor1 << endl;
    cout << "Com showpoint: ";
    cout.setf(ios_base :: showpoint);
    cout << valor1 << endl;
    return 0;
}