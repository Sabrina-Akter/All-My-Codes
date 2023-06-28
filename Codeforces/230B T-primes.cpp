#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, i, j, fl, c;
    cin >> t;
    while(t--)
    {
        c = 0;
        fl = 0;
        j = 0;
        cin >> x;
        for(i=2;i<x;i++)
        {
            if((x%i==0) && j==0)
            {
                c = 1;
                j = 1;
            }
            else if((x%i==0) && j==1)
            {
                c = 1;
                fl = 1;
                break;
            }
        }
        if((fl==1) || (c==0))
        {
            cout << "NO\n";
        }
        else if(fl==0)
        {
            cout << "YES\n";
        }
    }
    return 0;
}
