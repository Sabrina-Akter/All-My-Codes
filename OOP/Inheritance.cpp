#include <iostream>
using namespace std;

class person
{
    public:
        string name;
        int age;
        void display1()
        {
            cout << "Name: " << name << "\n" << "Age: " << age << endl;
        }

};

class student : public person
{
    public:
        int id;
        void display2()
        {
            cout << "Id: " << id << endl;
            display1();
        }

};


int main()
{
    student s;
    s.id = 22;
    s.name = "Kuddus";
    s.age = 19;
    s.display2();
    return 0;
}

/*
The process of obtaining the data members and functions from one class to another class is known as inheritance.

What I understood:
1. Same jinish gulo jaate barbar type korte na hoy, oi jonno ek class er function onno class e call korlei hoye jaabe.
Child class er first line er syntax ta moneh rakhte hobe.
2. Mother class ke bola hoy Base class.
3. Child class ke bola hoy Derived class.
*/
