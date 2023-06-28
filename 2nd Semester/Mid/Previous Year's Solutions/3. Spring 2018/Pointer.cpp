#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *pa = &a;
    cout << "Variable name: a \n" << "Constant of the variable: " << a << "\nMemory address of the variable: " << pa;
    return 0;
}
