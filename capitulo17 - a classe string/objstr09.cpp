//objstr09.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, comp;
    string s1("MicroComputador");
    comp = s1.size();       //ou com = s1.length();
    for(i = 0; i < comp; i++)
        cout << s1[i] << " ";
    cout << endl;
    return 0;
}