#include <iostream>
using namespace std;

class number
{
    private:
        int num;
    public:
        void set_num()
        {
            int x;
            cout << "Enter a number: ";
            cin >> x;
            num = x;
        }
        void get_num()
        {
            cout << "Your number is " << num << endl;
        }

};


int main()
{
    number n;
    n.set_num();
    n.get_num();
    return 0;
}

/*Encapsulation is a process of combining variables and functions in a single unit.
protecting data by declaring them as private.


What I understood:
1. Private variable ke public e niye ashar process.
2. set and get function use korar process.
*/
