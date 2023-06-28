#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back


int main()
{
    fastt;
    ll n, m, i, j;
    cin >> n >> m;
    ll A[n+5]={0};
    set <ll> s;
    set <ll>::iterator it;
    for(i=1;i<=n;i++)
    {
        s.insert(i);
    }
    for(i=0;i<m;i++)
    {
        ll l, r, x;
        vll v;
        cin >> l >> r >> x;
        for(it=s.lower_bound(l);*it<=r;it++)
        {
            if(*it!=x)
            {
                v.pb(*it);
                A[*it] = x;
            }
        }
        for(j=0;j<v.size();j++)
        {
            s.erase(v[j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
