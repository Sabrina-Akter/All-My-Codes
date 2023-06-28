#include <iostream>
using namespace std;

class SUM
{
    int a = 2, b = 3;
    public:
        SUM()
        {
            int x,y,z;
            x = a;
            y = b;
            z = x + y;
            cout << "The sum is " << z << ".\n";
        }
};

int main()
{
    SUM ob;
    return 0;
}
