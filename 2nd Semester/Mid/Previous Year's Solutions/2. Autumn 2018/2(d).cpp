#include <iostream>
using namespace std;

class myclass
{
        int n;
    public:
        myclass(int x)
        {
            n = x;
        }
        int GET()
        {
            return n;
        }
};

int square(myclass ob)
{
    return (ob.GET()*ob.GET());
}

int main()
{
    myclass num1(2), num2(6);
    cout << square(num1) << " " << square(num2);
    return 0;
}
