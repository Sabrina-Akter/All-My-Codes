#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, a;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> n;
        if(n%3==0)
        {
            a = n/3;
            cout << a << endl;
        }
        else if(n%7==0)
        {
            a = n/7;
            cout << a << endl;
        }
    }
    return 0;
}
