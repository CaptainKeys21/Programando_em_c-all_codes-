//objstr10.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Objeto String");
    string s2,s3;
    s2.assign(s1);                  //(1)
    cout << s2 << endl;
    s3.assign(s1, 0, 6);            //(2)
    cout << s3 << endl;
    char strc[9] = "String-C";
    string s4, s5;
    s4.assign(strc);                //(3)
    cout << s4 << endl;
    s5.assign(strc, 6);             //(4)
    cout << s5 << endl;
    string s6;
    s6.assign(4,'W');               //(5)
    cout << s6 << endl;
    string s7;
    s7.assign(strc+1, strc +5);     //(6)
    cout << s7 << endl;
    string s8;
    s8.assign(&strc[1], &strc[5]);  //(7)
    cout << s8 << endl;
    return 0;
}