//string07.cpp
#include <iostream>
using namespace std;
int main()
{
    char cores[6] = "verde";
    int k = 0;
    char *ptr = cores;
    while (ptr[k] != '\0')
    {
        cout << ptr[k] << endl;
        k++;
    }
    return 0;
}