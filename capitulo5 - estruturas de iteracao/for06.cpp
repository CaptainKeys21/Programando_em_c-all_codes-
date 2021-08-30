//for06.cpp
#include <iostream>
using namespace std;
int main()
{
    int k = 1;
    for (; k < 4;)      //Omissão da Expressão 1 e 3
    {
        cout << "Iteração " << k << endl;
        k++;
    }
    return 0;
}