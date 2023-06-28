#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, x;
    cin >> n;
    set <ll> s,d;
    set <ll>::iterator it;
    vll v;
    for(i=0;i<n;i++)
    {
        cin >> x;
        s.insert(x);
    }
    if(s.size()==1 || s.size()==2)
    {
        cout << "YES" << endl;
    }
    else if(s.size()==3)
    {
        for(it=s.begin();it!=s.end();it++)
        {
            v.pb(*it);
        }
        for(i=0;i<v.size()-1;i++)
        {
            d.insert(v[i+1]-v[i]);
        }
        if(d.size()==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
