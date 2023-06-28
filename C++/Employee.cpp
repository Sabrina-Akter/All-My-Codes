/*#include <iostream>
using namespace std;

class Employee
{
        int hour, salary;

    public:
        int a,b, final_salary;
        void getInfo(int x, int y)
        {
            hour = x;
            salary = y;
        }

        int AddSal()
        {
            if(salary<500)
            {
                a = 10;
            }
            else
            {
               a = 0;
            }
            return a;
        }
        int AddWork()
        {
            if(hour>6)
            {
                b = a+ salary + 5;
            }
            else
            {
                b = a+ salary;
            }
            return b;
        }
};

int main()
{
    Employee ob;
    ob.getInfo(7,400);
    ob.AddSal();
    ob.final_salary = ob.AddWork();

    cout << "Final Salary: " << ob.final_salary <<endl;

    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
class Employee
{
    char name[30];
    char Address[40];
    char yofj[20];
public:
    void getdata()
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"year of joining "<<endl;
        cin>>yofj;
        cout<<"enter address"<<endl;
        cin>>Address;
    }
    void putdata()
    {
        cout<<"Name "<<" Year of joining "<<"Address "<<endl;
       cout<<name<<"\t"<<yofj<<"   \t   "<<Address<<"\t"<<endl;

    }



};  int i;
int main()
{
    Employee employees[3];
    for(i=0;i<3;i++)
    {
       // cout<<"information of employees"<<i+1<<endl;
        employees[i].getdata();
    }for(i=0;i<3;i++)
    {
        cout <<"employees"<<i+1<<endl;
        employees[i].putdata();
    }
}*/

/*#include <iostream>
using namespace std;

class Rectangle
{
    int l,b;
    public:
        Rectangle()
        {
            int x, y;
            cout << "Enter the length: ";
            cin >> x;
            cout << "Enter the breadth: ";
            cin >> y;
            l = x;
            b = y;
        }

        void Area()
        {
            cout << "Area: " << l*b << endl;
        }

};

int main()
{
    Rectangle ob1;
    ob1.Area();
    Rectangle ob2;
    ob2.Area();
    return 0;
}*/

#include <iostream>
using namespace std;

class Matrix
{
    int x, y, m, n;
    public:
        int a,b,i,j;
        int Ar1[100][100];
        int Ar2[100][100];
        Matrix()
        {
            cout << "Enter the number of rows: ";
            cin >> a;
            cout << "Enter the number of columns: ";
            cin >> b;
            x = a;
            y = b;
            Ar1[x][y];
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    cout <<"For 1st matrix, Enter [" << i << "][" << j << "]: ";
                    cin >> Ar1[i][j];
                }
            }


            m = a;
            n = b;
            Ar2[m][n];
            cout << "\n";
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout <<"For 2nd matrix, Enter [" << i << "][" << j << "]: ";
                    cin >> Ar2[i][j];
                }
            }
        }

        void Add_Matrices()
        {
            cout << "\nBy adding two matrices, we get: \n";
            for(i=0;i<m;i++)
            {
                cout << "| ";
                for(j=0;j<n;j++)
                {
                    cout << Ar1[i][j]+Ar2[i][j] << " ";
                }
                cout << "|";
                cout << "\n";
            }
        }
        void Multiply_Matrices()
        {
            cout << "\nBy multiplying two matrices, we get: \n";
            for(i=0;i<m;i++)
            {
                cout << "| ";
                for(j=0;j<n;j++)
                {
                    cout << Ar1[i][j]*Ar2[i][j] << " ";
                }
                cout << "|";
                cout << "\n";
            }
        }

};

int main()
{
    Matrix ob;
    ob.Add_Matrices();
    ob.Multiply_Matrices();
    return 0;
}
