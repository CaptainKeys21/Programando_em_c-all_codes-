//hersim04.cpp
#include <iostream>
using namespace std;
class pessoa                //Declaração da classe-base pessoa
{
    public:
        ~pessoa();          //Protótipo do destrutor
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do método exibe()
    private:
        char snome[10];
        char cpf[10];
};
class homem : public pessoa //Declaração da classe derivada homem
{
    public:
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do metodo exibe()
    private:
        short int idade;
        short int peso;
};
class mulher : public pessoa//Declaração da classe derivada mulher
{
    public:
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do metodo exibe()
    private:
        char est_civil[11];
};
//Definição da função main()
int main()
{
    //Cria o objeto homem1. Utiliza o construtor default
    homem homem1;
    //Cria o objeto mulher1. Utiliza o construtor default
    mulher mulher1;
    cout << "Digite os dados do homem" << endl;
    homem1.le_dados();
    cout << "Digite os dados da mulher" << endl;
    mulher1.le_dados();
    cout << endl;
    cout << "O homem é: " << endl;
    homem1.exibe();
    cout << "A mulher é: " << endl;
    mulher1.exibe();
    return 0;
}
//Métodos da classe-base pessoa
void pessoa :: le_dados()       //Definição do método le_dados()
{
    cout << " Sobrenome: ";
    cin >> snome;
    cout << " CPF: ";
    cin >> cpf;
}
void pessoa :: exibe()          //Definição do método exibe()
{
    cout << " Sobrenome: " << snome << endl;
    cout << " CPF: " << cpf << endl;
}
pessoa :: ~pessoa()             //Definição do destrutor
{
}
//Métodos da classe-derivada homem
void homem :: le_dados()        //Definição do método le_dados()
{
    pessoa :: le_dados();
    cout << " Idade: ";
    cin >> idade;
    cout << " Peso: ";
    cin >> peso;
}
void homem :: exibe()           //Definição do método exibe()
{
    pessoa :: exibe();
    cout << " Idade: " << idade << endl;
    cout << " Peso: " << peso << endl;
}
//Métodos da classe-derivada mulher
void mulher :: le_dados()       //Definição do método le_dados()
{
    pessoa :: le_dados();
    cout << " Estado civil: ";
    cin >> est_civil;
}
void mulher :: exibe()          //Definição do método exibe()
{
    pessoa :: exibe();
    cout << " Estado civil: " << est_civil << endl;
}