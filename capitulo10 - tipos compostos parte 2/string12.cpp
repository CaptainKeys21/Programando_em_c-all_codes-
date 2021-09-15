//string12.cpp
#include <iostream>
using namespace std;
void exibe(char *);         //Protótipo da função exibe()
int main()
{
    char texto[9] = "string1";
    //Ponteiro para um char que aponta para um string
    char *ptr = "string2";
    exibe(texto);
    exibe(ptr);
    exibe("string3");
    return 0;
}
void exibe(char * ptr1)     //Definição da função exibe()
{
    //A variável estática interna n é um contador para cada chamada.
    //Como é estátistica, é inicializada com 0 automaticamente e apenas uma vez,
    //e o seu valor mantido entre as chamadas
    static int n;
    n++;
    cout << "Chamada " << n << ": ";
    while(*ptr1 != '\0')
    {
        cout << *ptr1;
        ptr1++;
    }
    cout << endl;
}