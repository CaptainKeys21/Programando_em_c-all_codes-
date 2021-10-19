//exc08.cpp
#include <iostream>
using namespace std;
class NumExtenso                //Declaração da classe NumExtenso
{
    public:                     //Protótipo dos métodos
        void atrib();
        void ler();
        void exibe();
        ~NumExtenso();          //Protótipo do destrutor
        class Erro              //Declaração da classe de exceção Erro
        {
            public:
                Erro(int);      //Protótipo do construtor
                int indice;
        };
    private:
        char * extensos[6];
        int numero;
};
int main()
{
    NumExtenso extenso1;        //Cria o objeto extenso1
    extenso1.atrib();
    try                         //Bloco try
    {
        extenso1.ler();
        extenso1.exibe();
        cout << endl;
    }
    //catch(NumExtenso :: Erro inderro) //Bloco catch
    catch(NumExtenso :: Erro & inderro) //Bloco catch
    {
        cout << "Número fora do intervalo. ";
        cout << "O número é: " << inderro.indice << endl;
        return 1;
    }
    return 0;
}
//Definição do método atrib(). Atribui valores ao objeto extenso1.
void NumExtenso :: atrib()
{
    extensos[0] = "";
    extensos[1] = "Um";
    extensos[2] = "Dois";
    extensos[3] = "Três";
    extensos[4] = "Quatro";
    extensos[5] = "Cinco";
}
//Definição do método ler(). Lê um número do teclado. Dispara uma exceção
//caso o número esteja fora do intervalo.
void NumExtenso :: ler()
{
    cout << "Digite um número (de 1 a 5): ";
    cin >> numero;
    if (numero < 1 || numero > 5)
        throw Erro(numero);
}
//Definição do método exibe(). Exibe o extenso do número digitado.
void NumExtenso :: exibe()
{
    cout << extensos[numero];
}
NumExtenso :: ~NumExtenso()     //Definição do destrutor
{
}
//Definição do construtor da classe de exceção
NumExtenso :: Erro :: Erro(int indice1)
{
    indice = indice1;
}