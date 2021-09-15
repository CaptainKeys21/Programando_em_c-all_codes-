//bitwis02.cpp
#include <iostream>
using namespace std;
int main()
{
    short int item = 12;
    cout << "Antes do deslocamento: " << item << endl;
    item = item >> 1;
    cout << "Depois do deslocamento: " << item << endl;
    return 0;
}