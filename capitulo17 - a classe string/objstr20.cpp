//objstr20
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alerta("Computador com vírus!");
    string subs(alerta.substr(11, 10));
    cout << subs << endl;
    return 0;
}