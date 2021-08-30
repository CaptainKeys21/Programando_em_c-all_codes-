//func15.cpp
#include <iostream>
using namespace std;
inline int somar (int, int);        //Protótipo da função inline somar()
inline int somar (int n1, int n2)   //Definição da função inline somar()
{
    return (n1 + n2);
}
int main()
{
    int total;
    total = somar(1,2);             //Chamadas à função inline somar()
    cout << total << endl;
    total = somar(10,20);
    cout << total << endl;
    total = somar(100, 200);
    cout << total << endl;
    return 0;
}