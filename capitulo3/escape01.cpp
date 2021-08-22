//escape01.cpp
#include <iostream>
using namespace std;
int main()
{
    char letra1 = '\x043';  //Sequência de escape hexadecimal
    char letra2 = '\103';   //Sequência de escape octal
    cout << letra1 << "\n";
    cout << letra2 << "\n";
    cout << "\x043\x02b\x02b" << endl;
    return 0;
}