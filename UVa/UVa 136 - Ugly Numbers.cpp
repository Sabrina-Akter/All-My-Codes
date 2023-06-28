#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
vll v;
int main()
{
    fastt;
    ll i, j, flag, n, x=0;
    for(i=2;i<=1000000;i++)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            v.pb(i);
        }
    }
    for(i=1;i<=1000000;i++)
    {
        flag=0;
        for(j=0;j<v.size();j++)
        {
            n = v[j];
            if((n==2 || n==3 || n==5) && (i%n==0))
            {
                continue;
            }
            else if (i%n==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            x++;
            cout << x << ": " << i << endl;
            if(x==1500)
            {
                break;
            }
        }
    }
    return 0;
}
