#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

int main()
{
    fastt;
    ll f, t, i, a, b,sum, k=0;
    cin >> f >> t;
    sum=t;
    vector<pair<ll, ll> > v;
    for(i=0;i<f;i++)
    {
        cin >> a >> b;
        v.pb(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        a = v[i].first;
        b = v[i].second;
        if(k==a)
        {
            sum+=b;
        }
        else if(sum>=(a-k))
        {
            sum = sum-(a-k)+b;
            k = a;
        }
    }
    cout << k+sum << endl;
    return 0;
}
