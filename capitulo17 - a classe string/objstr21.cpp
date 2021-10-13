//objstr21.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1("Comput");
    string s2("ador");
    s1.insert(6, s2);
    cout << s1 << endl;
    string s3("Diste"), s4("123quete456");
    s3.insert(3, s4, 3, 3);
    cout << s3 << endl;
    string s5("Diste");
    s5.insert(3,"que");
    cout << s5 << endl;
    string s6("Compdor");
    s6.insert(4, "uta123", 3);
    cout << s6 << endl;
    string s7("R$130,00");
    char ch = '*';
    s7.insert(2, 5, ch);
    cout << s7 << endl;
    return 0;
}