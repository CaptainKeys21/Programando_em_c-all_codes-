//for02.cpp
#include <iostream>
using namespace std;
int main()
{
    int k, somat = 0;
    for (k = 1; k < 6; k++)
    {
        cout << "k = " << k << endl;
        somat = somat + k;
    }
    //Comandos executados após o termino do loop
    cout << "Somatório dos valores = " << somat << endl;
    return 0;
}