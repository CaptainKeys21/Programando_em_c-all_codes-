//objstr25.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Chipset 456");
    cout << "s1 antes de resize(): " << s1 << endl;
    s1.resize(4);
    cout << "s1 depois de resize(): " << s1 << endl;
    string s2("ABC");
    char ch = '@';
    cout << "s2 antes de resize(): " << s2 << endl;
    s2.resize(9,ch);
    cout << "s2 depois de resize(): " << s2 << endl;
    return 0;
}