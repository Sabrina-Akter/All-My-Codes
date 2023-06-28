#include <iostream>
using namespace std;

class study
{
    public:
        char school[50], degree[50];
        void getdata()
        {
            cout << "Enter the name of the institution: ";
            cin >> school;
            cout << "Enter your degree: ";
            cin >> degree;
        }
        void showdata()
        {
            cout << "Name of the institution is: " << school << "\n";
            cout << "Degree: " << degree << "\n";
        }
};

class employee
{
    public:
        char name[50];
        int number;
        void getdata()
        {
            cout << "Enter the name of the employee: ";
            cin >> name;
            cout << "Enter the number of the employee: ";
            cin >> number;
        }
        void showdata()
        {
            cout << "Name of the employee is: " << name << "\n";
            cout << "Number of the employee is: " << number << "\n";
        }
};

class manager
{
    public:
        study s;
        employee e1;
        char title[50];
        void getdata_m()
        {
            cout << "Enter the position of the employee: ";
            cin >> title;
        }
        void showdata_m()
        {
            s.getdata(), s.showdata();
            e1.getdata(), e1.showdata();
            cout << "Position of the employee is: " << title << "\n";
        }
};

class laborer
{
    public:
        employee e2;
        int earning;
        void getdata_l()
        {
            cout << "Enter the earning of the employee: ";
            cin >> earning;
        }
        void showdata_l()
        {
            e2.getdata(), e2.showdata();
            cout << "Earning of the employee is: " << earning << "\n";
        }
};

int main()
{
    study Ob1;
    Ob1.getdata(), Ob1.showdata();
    employee Ob2;
    Ob2.getdata(), Ob2.showdata();
    manager Ob3;
    Ob3.getdata_m(), Ob3.showdata_m();
    laborer Ob4;
    Ob4.getdata_l(), Ob4.showdata_l();
    return 0;
}
