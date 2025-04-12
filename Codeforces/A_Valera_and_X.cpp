#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
const char nl = '\n';

int main()
{
    fastt;
    ll n;
    cin >> n;
    ll x = 0, y = n - 1;
    string s;
    bool ans = true;
    char c, c2;
    for(ll i = 0; i < n; i++)
    {
        cin >> s;
        if(i == 0) c = s[0], c2 = s[1];
        unordered_map <char, ll> mp;
        ll cnt = 0, cnt2 = 0;
        for(ll j = 0; j < n; j++)
        {
            mp[s[j]]++;
            if(j == x && s[j] == c) cnt++;
            if(j == y && s[j] == c) cnt++;
            if(j != x && j != y && s[j] == c) cnt++;
            if(s[j] == c2) cnt2++;
        }
        x++;
        y--;
        if(cnt == 2 && mp.size() == 2 && cnt2 > 0) continue;
        else ans = false;
    }
    if(ans) cout << "YES" << nl;
    else cout << "NO" << nl;
    return 0;
}