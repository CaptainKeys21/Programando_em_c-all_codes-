//for07.cpp
#include <iostream>
using namespace std;
int main()
{
    int j, k;
    for (j = 1; j < 4; j++)     //for externo
    {
        cout << "j = " << j << endl;
        for (k = 1; k < 4; k++)     //for interno
            cout << "k = " << k << endl;
        cout << endl;
    }
}