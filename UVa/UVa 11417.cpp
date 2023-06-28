#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, j, sum;
    vll v;
    while(cin>>n)
    {
        v.pb(n);
        if(n==0)
        {
            break;
        }
        else
        {
            sum=0;
            for(i=1; i<n; i++)
            {
                for(j=i+1; j<=n; j++)
                {
                    sum+=__gcd(i, j);
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
