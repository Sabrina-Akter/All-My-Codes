#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define all(x) x.begin(), x.end()
const char nl = '\n';

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, j, ans=0;
        unordered_map <string, ll> m;
        vector <string> v;
        string s;

        cin >> n;

        for(i=0;i<n;i++)
        {
            cin >> s;
            v.pb(s);
            m.insert({s,1});
        }

        for(i=0;i<n;i++)
        {
            s = v[i];
            string s1 = s, s2;
            char c;
            for(j=0;j<(v[i].size()-1);j++)
            {
                c = s1[s1.size()-1];
                s1.pop_back();
                s2.pb(c);
                reverse(all(s2));
                if(m[s1]==1 && m[s2]==1)
                {
                    ans++;
                    break;
                }
                reverse(all(s2));
            }
        }
        cout << ans << nl;
    }
    return 0;
}
