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
    ll n, m, i, j, a, b, mt=0, N=0, flag=0;
    cin >> n >> m;
    vector <pair<ll, ll> > v;
    for(i=0;i<m;i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--)
    {
        for(j=0;j<v[i].second;j++)
        {
            N++;
            mt = mt + v[i].first;
            if(N==n)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    cout << mt << endl;
    return 0;
}
