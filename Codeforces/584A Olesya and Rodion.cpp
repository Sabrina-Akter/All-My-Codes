#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, t, i;
    cin >> n >> t;
    if(t==10)
    {
        if(n==1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << 10;
            for(i=1;i<n-1;i++)
            {
                cout << 0;
            }
        }
    }
    else
    {
        cout << t;
        for(i=1;i<n;i++)
        {
            cout << 0;
        }
    }
    return 0;
}
