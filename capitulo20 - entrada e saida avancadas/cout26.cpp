//cout26.cpp
#include <iostream>
using namespace std;
int main()
{
    int valor = 10;
    //Passa a exibir valores em hexadecimal
    cout << hex;        //ou cout.setf(ios_base :: hex, ios_base :: basefield);
    cout << valor << endl;
    //Retorna ao sistema numérico default (decimal)
    cout.unsetf(ios_base :: hex);
    cout << valor << endl;
    return 0;
}