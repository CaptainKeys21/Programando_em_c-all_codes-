//string09.cpp
#include <iostream>
using namespace std;
int main()
{
    //Aloca, em tempo de execução, um bloco fixo de memória para 10 elementos
    char *ptr = new char[10];
    char letra = '@';
    int k;
    //Verifica se a alocação de memória foi feita com sucesso
    if(ptr == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        for(k = 0; k < 9; k++)  //Atribui valores de A até I
        {
            letra ++;
            ptr[k] = letra;
        }
        ptr[k] = '\0';          //Finaliza o string
        k = 0;
        while(ptr[k] != '\0')   //Exibe os valores
        {
            cout << ptr[k] << " ";
            k++;
        }
        delete [ ] ptr;         //Libera o bloco de memória alocado
        cout << endl;
        return 0;
    }
}