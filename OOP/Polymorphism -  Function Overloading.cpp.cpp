#include <iostream>
using namespace std;

class number
{
    public:
        void PRINT(int i)
        {
            cout << "Integer: " << i << endl;
        }
        void PRINT(double d)
        {
            cout << "Double floating point: " << d << endl;
        }
        void PRINT(char *c)
        {
            cout << "Character: " << c << endl;
        }


};

int main()
{
    number num;
    num.PRINT(10);
    num.PRINT(10.55);
    num.PRINT("Hello");

    return 0;
}
