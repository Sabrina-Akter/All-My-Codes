#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
const char nl = '\n';

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, k, x;
        cin >> n >> m >> k;
        unordered_map <ll, ll> mp;
        for(ll i = 0; i < n; i++)
        {
            cin >> x;
            mp[x] = 1;
        }
        for(ll i = 0; i < m; i++)
        {
            cin >> x;
            if(mp[x] == 2) continue;
            if(mp[x] == 0) mp[x] = 2;
            else mp[x] = 3;
        }
        ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for(ll i = 1; i <= k; i++)
        {
            if(mp[i] == 1) cnt1++;
            else if(mp[i] == 2) cnt2++;
            else if(mp[i] == 3) cnt3++;
        }
        if(cnt1 + cnt2 + cnt3 == k)
        {
            if(cnt1 > k/2 || cnt2 > k/2) cout << "NO" << nl;
            else cout << "YES" << nl;
        }
        else cout << "NO" << nl;
    }
    return 0;
}