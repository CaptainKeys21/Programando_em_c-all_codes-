//cout24.cpp
#include <iostream>
using namespace std;
int main()
{
    int valor = 100;
    char texto[6] = "abcde";
    cout << "123456789" << endl << endl;
    cout.setf(ios_base :: right, ios_base :: adjustfield);
    cout.width(6);
    cout << valor << endl;
    cout.width(6);
    cout << texto << endl;
    cout.fill('#');
    cout.setf(ios_base :: left, ios_base :: adjustfield);
    cout.width(6);
    cout << valor << endl;
    return 0;
}