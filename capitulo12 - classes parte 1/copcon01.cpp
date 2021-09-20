//copcon01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class hard                      //Declaração da classe hard
{
    public:
        hard(char *, float);    //Protótipo do construtor
        ~hard();                //Protótipo do destrutor
        void exibe();           //Protótipo do método exibe()
    private:
        char marca[20];
        float clock;
};
int main()
{
    //Cria o objeto intel1, chamando o construtor
    hard intel1("Intel Pentium 4", 2.2);
    intel1.exibe();             //Objeto intel1 chama o método exibe()
    cout << endl;
    //Cria e inicializa novos objetos a partir do objeto intel1, chamando o
    //construtor de cópia
    hard intel2(intel1);
    hard intel3 = intel1;
    hard intel4 = hard(intel1);
    hard *ptr = new hard(intel1);
    intel2.exibe();             //Objeto intel2 chama o método exibe()
    cout << endl;
    intel3.exibe();             //Objeto intel3 chama o método exibe()
    cout << endl;
    intel4.exibe();             //Objeto intel4 chama o método exibe()
    cout << endl;
    ptr -> exibe();             //Objeto anônimo chama o método exibe()
    delete ptr;
    return 0;
}
void hard :: exibe()            //Definição do método exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Clock: " << clock << endl;
}
hard :: hard(char * marca1, float clock1)   //Definição do construtor
{
    strcpy(marca, marca1);
    clock = clock1;
}
hard :: ~hard()                 //Definição do destrutor
{
    //Os objetos são destruídos na ordem inversa em que foram criados. A linha
    //seguinte ilustra a execução do destrutor. Um destrutor não precisa ter instruções
    cout << "Destruindo o objeto... " << marca << endl;
}
