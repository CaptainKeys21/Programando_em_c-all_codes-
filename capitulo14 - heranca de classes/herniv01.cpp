//herniv01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class pessoa                //Declaração da classe pessoa
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
        void exibe();       //Protótipo do método exibe()
    private:
        short int idade;
        short int peso;
};
class rapaz : public homem  //Declaração da classe derivada rapaz
{
    public:
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do método exibe()
    private:
        char est_civil[11];
};
//Definição da função main()
int main()
{
    homem homem1;           //Cria o objeto homem1. Utiliza o construtor default
    rapaz rapaz1;           //Cria o objeto rapaz1. Utiliza o construtor default
    cout << "Digite os dados do homem" << endl;
    homem1.le_dados();
    cout << "Digite os dados do rapaz" << endl;
    rapaz1.le_dados();
    cout << endl;
    cout << "O homem é: " << endl;
    homem1.exibe();
    cout << "O rapaz é: " << endl;
    rapaz1.exibe();
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
//Métodos da classe-derivada rapaz
void rapaz :: le_dados()        //Definição do método le_dados()
{
    homem :: le_dados();
    cout << " Estado civil: ";
    cin >> est_civil;
}
void rapaz :: exibe()           //Definição do método exibe()
{
    homem :: exibe();
    cout << " Estado civil: " << est_civil << endl;
}