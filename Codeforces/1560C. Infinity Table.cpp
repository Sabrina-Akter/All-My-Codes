#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define end "\n"

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        double S=sqrt(n);
        ll s=sqrt(n);
        if(s==S)
        {
            cout << s << " " << 1 << endl;
        }
        else
        {
            ll ceil=s+1, l=(ceil-1)+ceil, d;
            ll mid=(l/2)+1;
            ll m=(s*s)+mid, x=ceil, y=ceil;
            if(n>m)
            {
                d=n-m;
                y=y-d;
            }
            else if(n<m)
            {
                d=m-n;
                x=x-d;
            }
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
