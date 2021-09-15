//string13.cpp
#include <iostream>
using namespace std;
char *exibe(char);          //Protótipo da função exibe()
int main()
{
    char *ptr;              //Ponteiro para um char
    char caract;
    cout << "Digite o caractere a ser repetido: ";
    cin >> caract;
    ptr = exibe(caract);
    cout << ptr << endl;
    delete [ ] ptr;         //Libera o bloco de memória alocado
    return 0;
}
char *exibe(char caract1)   //Definição da função exibe()
{
    int k;
    char *ptr1 = new char[11];
    for(k = 0; k < 10; k++)
        ptr1[k] = caract1;
    ptr1[k] = '\0';         //Finaliza o string
    return ptr1;
}