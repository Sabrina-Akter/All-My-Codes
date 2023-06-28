#include <iostream>
using namespace std;

class test
{
    public:
        int x,y;
        void GET()
        {
            cin >> x >> y;
        }
};

int sum(test ob)
{
    return((ob.x)+(ob.y));
}

int main()
{
    test num;
    num.GET();
    cout << sum(num);
    return 0;
}
