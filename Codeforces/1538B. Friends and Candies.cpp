#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

ll N;
bool f(ll a)
{
    if(a>N)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, x, sum=0;
        vll v;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
            sum+=x;
        }
        if(sum%n!=0)
        {
            cout << -1 << endl;
        }
        else
        {
            N = sum/n;
            ll c = count_if(v.begin(), v.end(), f);
            cout << c << endl;
        }
    }
    return 0;
}
