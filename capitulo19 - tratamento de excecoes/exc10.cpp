//exc10.cpp
#include <iostream>
using namespace std;
struct conta
{
    double saldo[5000];
};
int main()
{
    conta * ptr;
    try
    {
        cout << "O operador new tenta alocar memória" << endl;
        ptr = new conta[100000];
    }
    catch(bad_alloc & mensag)
    {
        cout << "String do método what(): " << mensag.what() << endl;
        return 1;
    }
    delete [ ] ptr;
    return 0;
}