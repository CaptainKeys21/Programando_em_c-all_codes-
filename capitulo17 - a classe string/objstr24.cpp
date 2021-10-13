//objstr24.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("CPU"), s2("ROM-BIOS");
    cout << "Antes do swap()" << endl;
    cout << "s1: " << s1;
    cout << " s2: " << s2 << endl << endl;
    cout << "Depois do swap()" << endl;
    s1.swap(s2);
    cout << "s1: " << s1;
    cout << " s2: " << s2 << endl;
    return 0;
}