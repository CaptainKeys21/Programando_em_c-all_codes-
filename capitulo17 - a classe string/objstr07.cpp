//objstr07.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Classes-Objetos");
    string s2(s1, 0, 8);
    cout << s2 << endl;
    string s3(s1, 8, 7);
    cout << s3 << endl;
    string s4(s1, 0, 25);
    cout << s4 << endl;
    return 0;
}