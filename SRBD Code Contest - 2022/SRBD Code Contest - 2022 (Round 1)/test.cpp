#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long row, column, a, b;
    cin >> row >> column;
    a = row/3;
    b = column/3;
    if(row%3!=0)
    {
        a++;
    }
    if(column%3!=0)
    {
        b++;
    }
    cout << a*b << endl;
    return 0;
}