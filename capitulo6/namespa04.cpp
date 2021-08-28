//namespa04.cpp
#include<iostream>
void mensag();      //Protótipo da função mensag()
int main()
{
    using namespace std;
    cout << "Namespace std na função main()" << endl;
    mensag();       //chama a função mensag()
    return 0;
}
void mensag()       //Definição da função mensag()
{
    //cout << "Função mensag()";
    return;
}