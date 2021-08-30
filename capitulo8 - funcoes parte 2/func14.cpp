//func14.cpp
#include <iostream>
using namespace std;
//Protótipo da função substr() com argumentos-default
void substr(char *, int ncar = 1);
int main()
{
    substr("ABCDE", 3);
    return 0;
}
void substr(char * string, int nc)  //Definição da função substr()
{
    int k = 0;
    while (k < nc)
    {
        cout << string[k];
        k++;
    }
    cout << endl;
}