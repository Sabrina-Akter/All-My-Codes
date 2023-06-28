#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

bool cmp(pair<ll,ll> x, pair<ll,ll> y)
{
    if(x.first!=y.first)
    {
        return x.first<y.first;
    }
    else
    {
        return x.second>y.second;
    }
}

int main()
{
    fastt;
    ll n, k, a, b, i, z=0;
    map <pair<ll, ll>, ll > m;
    vector <pair<ll, ll> > v;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        v.pb({a,b});
        m[{a,b}]++;
    }
    sort(v.begin(),v.end(), cmp);
    for(i=v.size()-1;i>=0;i--)
    {
        z++;
        if(z==k)
        {
            cout << m[{v[i].first, v[i].second}] << endl;
            break;
        }
    }

    return 0;
}
