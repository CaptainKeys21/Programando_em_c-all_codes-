//copcon02.cpp
#include <iostream>
#include <cstring>
using namespace std;
class hard                      //Declaração da classe hard
{
    public:
        hard(char *, float);    //Protótipo do construtor
        ~hard();                //Protótipo do destrutor
        char marca[20];
        float clock;
};
void exibe(hard);               //Protótipo da função não-membro exibe
int main()
{
    //Cria o objeto intel1, chamando o construtor
    hard intel1("Intel Pentium 4", 2.2);
    //Chama a função não-membro exibe() passando o objeto intel1 por valor
    exibe(intel1);
    return 0;
}
hard :: hard(char * marca1, float clock1)   //Deifnição do construtor
{
    strcpy(marca, marca1);
    clock = clock1;
}
hard :: ~hard()                 //Definição do destrutor
{
    //Os objetivos são destruidos na ordem inversa em que foram criados. A linha
    //seguinte ilustra a execussão do destrutor. Um destrutor não precisa ter instruções
    cout << "Destruindo o objeto... " << marca << endl;
}
void exibe(hard intel11)        //Definição da função não-membro exibe()
{
    cout << "Marca: " << intel11.marca << endl;
    cout << "Clock: " << intel11.clock << endl;
}