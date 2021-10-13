//objstr08.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("abc");
    string s2("ABC");
    char str[4] = "abc";
    if(s1 != s2)
        cout << "s1 diferente de s2" << endl;
    if(s1 == str)
        cout << "s1 igual a str" << endl;
    if(str == s1)
        cout << "str igual a s1" << endl;
    return 0;
}