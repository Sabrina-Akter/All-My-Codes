#include <iostream>
using namespace std;

enum days_of_week
{
    Sun, Mon, Tues, Wed, Thurs, Fri, Sat
};

int main()
{
    days_of_week day1=Sun, day2=Mon;
    cout << "day1 = " << day1 << " " << "day2 = " << day2;
    return 0;
}
