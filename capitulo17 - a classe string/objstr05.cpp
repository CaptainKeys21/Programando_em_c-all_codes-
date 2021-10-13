//objstr05.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char stringc[9] = "String-C";
    string s1(stringc, 6);
    cout << s1 << endl;
    return 0;
}