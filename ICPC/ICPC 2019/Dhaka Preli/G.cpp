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
    ll n, p, i, c=0, a, b, G;
    cin >> n >> p;
    set <pair<ll, ll> > s;
    set <ll>::iterator it;
    vll v;
    for(i=1;i<=n;i++)
    {
        v.pb(i);
    }
    do
    {
        c++;
        if(c%2!=0)
        {
            a=v[v.size()-2], b=v[v.size()-1];
        }
        else if(c%2==0)
        {
            a=v[v.size()-1], b=v[v.size()-2];
        }
        s.insert(make_pair(a,b));
    }while(next_permutation(v.begin(),v.end()));
    for(it=s.begin();it!=s.end();it++)
    {
        cout << *it.first << " " << *it.second;
    }
    return 0;
}
