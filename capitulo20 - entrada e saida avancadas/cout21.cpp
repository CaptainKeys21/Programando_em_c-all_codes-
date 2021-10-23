//cout21.cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2;
    cout << "Sem boolalpha: ";
    cout << (a < b) << " ";
    cout << (a > b) << endl;
    cout.setf(ios_base :: boolalpha);
    cout << "Com boolalpha: ";
    cout << (a < b) << " ";
    cout << (a > b) << endl;
    return 0;
}