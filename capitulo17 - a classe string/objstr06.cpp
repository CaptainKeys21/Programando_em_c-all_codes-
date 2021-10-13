//objstr06.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[11] = "ABCDEFGHIJ";
    string s2(str, str+5);
    cout << s2 << endl;
    string s3(str+5, str+10);
    cout << s3 << endl;
    string s4(&str[0], &str[10]);
    cout << s4 << endl;
    return 0;
}