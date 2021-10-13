//objstr22.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Computador");
    s1.replace(4, 3, "ila");
    cout << s1 << endl;
    string s2("Computador");
    string s3("123456");
    s2.replace(4, 3, s3, 0, 3);
    cout << s2 << endl;
    string s4("Banana");
    s4.replace(2, 4, "tata");
    cout << s4 << endl;
    string s5("Computador");
    s5.replace(4, 3, "123456", 0 ,3);
    cout << s5 << endl;
    string s6("123456");
    char ch = '*';
    s6.replace(0, 6, 6, ch);
    cout << s6 << endl;
    return 0;
}