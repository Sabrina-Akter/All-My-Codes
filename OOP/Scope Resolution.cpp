/*#include <iostream>
using namespace std;

class myclass
{
        int a = 10;
        public:
            int x = a;
        void print()
        {
            cout << x << endl;
        }

};

int main()
{
    myclass ob;
    ob.print();
    return 0;
}

 By using scope resolution operator we can write this program as:*/

#include <iostream>
using namespace std;

class myclass
{
      int a = 10;
      public:
        int x = a;
        void print();
};

void myclass::print()
{
    cout << x << endl;
}

int main()
{
    myclass ob;
    ob.print();
    return 0;
}


