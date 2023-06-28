#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
        string name;
        int age;
        person()
        {
            cout << "Enter Name: ";
            getline(cin,name);
            cout << "Enter Age: ";
            cin >> age;
        }
        void info()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main()
{
    person ob;
    ob.info();

    return 0;
}
