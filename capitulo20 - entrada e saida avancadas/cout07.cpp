//cout07.cpp
#include <iostream>
using namespace std;
int main()
{
    int k = 5;
    float saldo = 3.34567;
    while (k > 0)
    {
        cout.precision(k);
        cout << saldo << endl;
        k--;
    }
    return 0;
}