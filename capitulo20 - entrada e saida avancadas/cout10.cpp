//cout10.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int k = 5;
    float saldo = 3.34567;
    while (k > 0)
    {
        cout << setprecision(k) << saldo << endl;
        k--;
    }
    return 0;
}