//friend01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class esposa;                               //Declaração antecipada
class marido                                //Declaração da classe marido
{
    public:
        marido(char *, float, float);       //Protótipo do construtor
        ~marido();                          //Protótipo do destrutor
        friend void exibe(marido,esposa);   //Protótipo da função friend exibe()
    private:
        char nome1[10];
        float salario1;
        float inss1;
};
class esposa                                //Declaração da classe esposa
{
    public:
        esposa(char *, float, float);       //Protótipo do construtor
        ~esposa();                          //Protótipo do destrutor
        friend void exibe(marido, esposa);  //Protótipo da função friend exibe()
    private:
        char nome2[10];
        float salario2;
        float renda2;
};
int main()
{
    //Cria o objeto homem, chamando o construtor
    marido homem("Fernando", 3000.00, 500.00);
    //Cria o objeto mulher, chamando o construtor
    esposa mulher("Suely", 3000.00, 0.00);
    exibe(homem, mulher);
    return 0;
}
//Definição do construtor da classe marido
marido :: marido(char * nome11, float salario11, float inss11)
{
    strcpy(nome1, nome11);
    salario1 = salario11;
    inss1 = inss11;
}
//Definição do destrutor da classe marido
marido :: ~marido()
{
}
//Definição do construtor da classe esposa
esposa :: esposa(char * nome22, float salario22, float renda22)
{
    strcpy(nome2, nome22);
    salario2 = salario22;
    renda2 = renda22;
}
//Definição do destrutor da classe esposa
esposa :: ~esposa()
{
}
void exibe(marido h1, esposa m1)    //Definição da função friend exibe()
{
    cout << "Nome: " << h1.nome1 << endl;
    cout << "Salário: " << h1.salario1 << endl;
    cout << "INSS: " << h1.inss1 << endl << endl;
    cout << "Nome: " << m1.nome2 << endl;
    cout << "Salário: " << m1.salario2 << endl << endl;
    cout << "Renda mensal do casal " << h1.nome1 << " e " << m1.nome2 << ": R$ ";
    m1.renda2 = h1.salario1 - h1.inss1 + m1.salario2;
    cout << m1.renda2 << endl; 
}


