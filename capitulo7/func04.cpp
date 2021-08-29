//func04.cpp
#include <iostream>
using namespace std;
int conv_horas();       //Protótipo da função conv_horas()
int main()
{
    int retorno;
    //Chama a função conv_horas() sem argumentos.
    //O Valor retornado é armazenado na variável retorno
    retorno = conv_horas();
    if(retorno == 1)
    {
        cout << "Valor incorreto. Conversão não efetuada";
        return 1;
    }
    else
        return 0;
}
int conv_horas()        //Definição da função conv_horas()
{
    int horas, minutos;
    cout << "CONVERSÃO DE HORAS EM MINUTOS" << endl << endl;
    cout << "Digite as horas (entre 1 e 24): ";
    cin >> horas;
    if(horas < 1 || horas > 24)
        return 1;       //Retorna 1 em caso de erro
    else
        {
            minutos = horas * 60;
            cout << minutos << " minutos" << endl;
            return 0;   //Retorna 0 em caso de sucesso
        }
}