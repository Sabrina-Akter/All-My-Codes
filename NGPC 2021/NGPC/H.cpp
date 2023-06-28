#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <long long int>
#define pb push_back
#define nl endl
int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, f=0, x;
        vll v(n);
        unordered_map <ll, ll> m;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(i==0)
            {
                v[i] = x;
            }
            else
            {
                v[i] = x-v[i-1];
            }
            m[v[i]]++;
            if(m[v[i]]>=2)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout << "Won" << nl;
        }
        else
        {
            cout << "Lost" << nl;
        }
    }
    return 0;
}