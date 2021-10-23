//cin10.cpp
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Antes da entrada de dados" << endl;
    cout << "rdstate: " << cin.rdstate() << endl;
    cout << "eof(): " << cin.eof() << endl;
    cout << "Fail(): " << cin.fail() << endl;
    cout << "bad(): " << cin.bad() << endl;
    cout << "good():" << cin.good() << endl << endl;
    cout << "Digite uma letra: ";
    cin >> numero;
    cout << endl << "Após a entrada de dados" << endl;
    cout << "rdstate: " << cin.rdstate() << endl;
    cout << "eof(): " << cin.eof() << endl;
    cout << "Fail(): " << cin.fail() << endl;
    cout << "bad(): " << cin.bad() << endl;
    cout << "good():" << cin.good() << endl;
    return 0;
}