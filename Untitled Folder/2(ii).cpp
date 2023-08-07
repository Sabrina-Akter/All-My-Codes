#include<iostream>
using namespace std;

class person
{
    protected:
        string name;
        int age;

    public:
        void getdata()
        {
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the age: ";
            cin>>age;
        }

        void showdata()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age;
        }

        void print_address(void)
        {
            cout<<"\n The address of object is "<<this;
        }
};


class student: public person
{
    private:
        int ID;

    public:
        void getdata()
        {
            cout<<"Enter the information for student:"<<endl;
            person::getdata();
            cout<<"Enter Student ID: ";
            cin>>ID;
        }

        void showdata()
        {
            cout<<"\nThe information on student is:"<<endl;
            person::showdata();
            cout<<"\nID : "<<ID;
        }
};


class employee: public person
{
        private:
            float salary;

        public:
            void getdata()
            {
                cout<<"\nEnter the information on employee:"<<endl;
                person::getdata();
                cout<<"Enter Employee's salary: ";
                cin>>salary;
            }

            void showdata()
            {
                cout<<"\nThe information on Employee is ";
                person::showdata();
                cout<<"\nSalary: "<<salary<<endl;
            }
};



int main()
{
    student s;
    employee e;
    s.getdata();
    e.getdata();
    s.showdata();
    e.showdata();
    s.print_address();
    e.print_address();

    return 0;
}
