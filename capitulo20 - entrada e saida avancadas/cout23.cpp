//cout23.cpp
#include <iostream>
using namespace std;
int main()
{
    float valor1 = 100.;
    cout << "Com fixed: ";
    cout.setf(ios_base :: fixed, ios_base :: floatfield);
    cout << valor1 << endl;
    cout << "Com scientific: ";
    cout.setf(ios_base :: scientific, ios_base :: floatfield);
    cout << valor1 << endl;
    return 0;
}