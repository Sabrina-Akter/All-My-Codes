#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    fastt;
    vll v;
    ll n, i, j;
    cin >> n;
    if(n==1)
    {
        cout << 1 << endl;
    }
    else
    {
        for(i=sqrt(n); i>=1; i--)
        {
            if(n%i==0)
            {
                if(i==(n/i))
                {
                    v.pb(i);
                }
                else
                {
                    v.pb(i);
                    v.pb(n/i);
                }
            }
        }
        sort(v.begin(),v.end());
        for(i=v.size()-1; i>=1; i--)
        {
            ll flag=0;
            for(j=i; j>=1; j--)
            {
                if(v[i]%v[j]==0)
                {
                    ll d=sqrt(v[j]);
                    double D=sqrt(v[j]);
                    if(d==D)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                cout << v[i] << endl;
                break;
            }
        }
    }
    return 0;
}
