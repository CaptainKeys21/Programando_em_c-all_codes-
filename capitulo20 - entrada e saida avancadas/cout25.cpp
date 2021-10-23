//cout25.cpp
#include <iostream>
using namespace std;
int main()
{
    int n = -115;
    cout.width(7);
    cout.fill('*');
    cout.setf(ios_base :: internal, ios_base :: adjustfield);
    cout << n << endl;
    return 0;
}