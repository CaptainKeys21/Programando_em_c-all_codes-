//objstr17.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int posic;
    string s1("Computadores");
    string s2("dr");
    posic = s1.find_last_of(s2);
    cout << "'r' encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find_last_of("oto");
    cout << "'0' encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find_last_of("pet", 11, 2);
    cout << "'e' encontrado na posição " << posic << " de s1" << endl;
    posic = s1.find_last_of('o');
    cout << "'o' encontrado na posição " << posic << " de s1" << endl;
    return 0;
}