#include <iostream>
using namespace std;

class printdata
{
    public:
        void print(int i)
        {
            cout << "Printing int: " << i << endl;
        }
        void print(double f)
        {
            cout << "Printing float: " << f << endl;
        }
        void print(char *c)
        {
            cout << "Printing character: " << c << endl;
        }
};

int main()
{
    printdata ob;
    ob.print(5);
    ob.print(500.263);
    ob.print("Hello");
    return 0;
}
