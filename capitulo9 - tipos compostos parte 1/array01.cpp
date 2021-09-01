//array01.cpp
#include <iostream>
using namespace std;
int main()
{
    int numeros[10], k;
    for (k = 0; k < 10; k++)
        numeros[k] = k + 1;
    for (k = 0; k < 10; k++)
        cout << numeros[k] << " ";
    cout << endl;
    return 0;
}