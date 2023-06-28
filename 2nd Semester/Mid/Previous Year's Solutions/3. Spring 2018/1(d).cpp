#include <iostream>
using namespace std;

class A
{
        int i;
    public:
        void set(A ob, int x);
};
void A::set(A ob, int x)
{
    ob.i = x;
    cout << ob.i;
}

int main()
{
    A ob;
    ob.set(ob,6);
    return 0;
}
