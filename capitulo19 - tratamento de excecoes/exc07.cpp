//exc07.cpp
#include <iostream>
using namespace std;
class NumExtenso            //Declaração da classe NumExtenso
{
    public:                 //Protótipos de métodos
        void atrib();
        void ler();
        void exibe();
        ~NumExtenso();      //Protótipo do destrutor
        class Erro          //Declaração da classe de execção Erro
        {
        };
    private:
        char * extensos[6];
        int numero;
};
int main()
{
    NumExtenso extenso1;    //Cria o objeto extenso1
    extenso1.atrib();       //Objeto extenso1 chama o método atrib()
    try
    {
        extenso1.ler();     //Objeto extenso1 chama o método ler()
        extenso1.exibe();   //Objeto extenso1 chama o método exibe()
        cout << endl;
    }
    catch(NumExtenso :: Erro)   //Bloco catch
    {
        cout << "Numero fora do intervalo" << endl;
        return 1;
    }
    return 0;
}
//Definição do método atrib(). Atribui valores ao objeto extenso1
void NumExtenso :: atrib()
{
    extensos[0] = "";
    extensos[1] = "Um";
    extensos[2] = "Dois";
    extensos[3] = "Três";
    extensos[4] = "Quatro";
    extensos[5] = "Cinco";
}
//Definição do método ler(). Lê um numero do teclado. Dispara uma exceção
//caso o número esteja fora do intervalo.
void NumExtenso :: ler()
{
    cout << "Digite um número (de 1 a 5): ";
    cin >> numero;
    if (numero < 1 || numero > 5)
        throw Erro();
}
//Definição do método exibe(). Exibe o extenso do numero digitado.
void NumExtenso :: exibe()
{
    cout << extensos[numero];
}
NumExtenso :: ~NumExtenso()     //Definição do destrutor
{
}