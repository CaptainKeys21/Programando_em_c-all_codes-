//for05.cpp
#include <iostream>
using namespace std;
int main()
{
    int k = 1;
    for (; k < 4; k++)      //Omissão da expressão 1
        cout << "Iteração " << k << endl;
    return 0;
}