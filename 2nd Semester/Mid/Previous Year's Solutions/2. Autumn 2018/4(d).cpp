#include <iostream>
using namespace std;

class bank_acc
{
        string name;
        int acc_num;
        string type_acc;
        double balance;
    public:
        string a;
        int b;
        string c;
        double d;
        bank_acc()
        {
            cout << "Enter the name: ";
            cin >> a;
            name = a;
            acc_num = b;
            type_acc = c;
            balance = d;
        }
        void deposit()
        {
            int x;
            cout << "\n\nEnter the amount of money you will deposit: ";
            cin >> x;
            balance = 500 + x;
        }
        void withdraw()
        {
            int y;
            cout << "\n\nEnter the amount of money you will withdraw: ";
            cin >> y;
            balance = balance - (y);
        }
        void display()
        {
            cout << "\n\nName: " << name << endl;
            cout << "Current balance: " << balance << endl;
        }
};

int main()
{
    bank_acc person;
    person.deposit();
    person.withdraw();
    person.display();
    return 0;
}
