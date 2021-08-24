//while02.cpp
#include <iostream>
using namespace std;
int main()
{
    int k = 1, somat = 0;
    while (k < 6)
    {
        cout << "k = " << k << endl;
        somat = somat + k;
        k += 1;
    }
    // Comandos executados após o término do loop
    cout << "Somatório dos valores = " << somat << endl;
    return 0;
}