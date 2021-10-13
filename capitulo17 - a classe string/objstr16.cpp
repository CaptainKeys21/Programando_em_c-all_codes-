//objstr16.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int posic;
    string s1("Computadores");
    string s2("dr");
    posic = s1.find_first_of(s2, 0);
    cout << "'d' encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find_first_of("rua", 0);
    cout << "'u' encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find_first_of("rp", 0, 2);
    cout << "'p' encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find_first_of('0');
    cout << "'o' encontrado na posição " << posic << " de s1" << endl;
    return 0;
}