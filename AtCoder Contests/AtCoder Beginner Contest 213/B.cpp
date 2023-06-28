#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    vector <pair<ll, ll> > v;
    ll n, x, i, ans;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        v.pb({x, i});
    }
    sort(v.begin(), v.end());
    ans = v[v.size()-2].second;
    cout << ans << endl;
    return 0;
}
