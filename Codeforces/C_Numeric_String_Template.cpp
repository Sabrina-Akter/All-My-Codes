#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
const char nl = '\n';

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll m;
        cin >> m;
        string s;
        while(m--)
        {
            cin >> s;
            bool ans = true;
            if(s.size() != n)
            {
                ans = false;
            }
            else
            {
                unordered_map <char, ll> letter;
                unordered_map <ll, char> num;
                for(ll i = 0; i < n; i++)
                {
                    if(letter.count(s[i]) == false && num.count(v[i]) == false)
                    {
                        letter[s[i]] = v[i];
                        num[v[i]] = s[i];
                    }
                    else if(letter[s[i]] == v[i] && num[v[i]] == s[i])
                    {
                        continue;
                    }
                    else
                    {
                        ans = false;
                        break;
                    }
                }
            }
            if(ans) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }
    return 0;
}