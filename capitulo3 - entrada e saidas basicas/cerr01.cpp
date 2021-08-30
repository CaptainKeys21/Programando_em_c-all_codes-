//cerr01.cpp
#include <iostream>
using namespace std;
int main()
{
    int divid, divis, quoc;
    cout << "Digite o dividendo: ";
    cin >> divid;
    cout << "Digite o divisor: ";
    cin >> divis;
    if (divis == 0)
        cerr << "O divisor não pode ser zero" << endl;
    else
        quoc = divid / divis;
    return 0;
}