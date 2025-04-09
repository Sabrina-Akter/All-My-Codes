#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
const char nl = '\n';

int main()
{
    fastt;
    ll t, i, j;
    cin >> t;
    while(t--)
    {
        string s1, s2, s;
        cin >> s1 >> s2;
        unordered_map <string, ll> mp;
        for(i = 0; i < s1.size(); i++)
        {
            s = "";
            for(j = i; j < s1.size(); j++)
            {
                s += s1[j];
                mp[s] = 1;
            }
        }
        ll mx = 0;
        for(i = 0; i < s2.size(); i++)
        {
            s = "";
            for(j = i; j < s2.size(); j++)
            {
                s += s2[j];
                if(mp[s] == 1) mx = max(mx, (ll)s.size());
            }
        }
        cout << (s1.size() - mx) + (s2.size() - mx) << nl;
    }
    return 0;
}