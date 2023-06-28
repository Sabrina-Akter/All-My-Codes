#include <iostream>
using namespace std;

class CSE
{
        int a,b,c;
    public:
        CSE()
        {
            cout << "Hello\n";
        }
        ~CSE()
        {
            cout << "IIUC";
        }
};

int main()
{
    CSE a;
    return 0;
}

