#include <iostream>
using namespace std;

int x = 10;
void fun(int x)
{
    cout << ::x << endl;
}

int main()
{
    fun(5);
    return 0;
}
