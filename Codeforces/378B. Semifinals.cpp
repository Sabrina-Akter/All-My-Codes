#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll a[100005];
ll b[100005];
vector <pair<pair<ll,ll>,ll > > v;
int main()
{
    fastt;
    ll n, x, y, i, k, K;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> x >> y;
        k = i;
        K=2*k;
        if(K<=n)
        {
            a[i]=1;
            b[i]=1;
        }
        v.pb({{x,i},1});
        v.pb({{y,i},2});
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        x=v[i].first.second;
        y=v[i].second;
        if(y==1)
        {
            a[x]=1;
        }
        else if(y==2)
        {
            b[x]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout << a[i];
    }
    cout << endl;
    for(i=1;i<=n;i++)
    {
        cout << b[i];
    }
    cout << endl;
    return 0;
}
