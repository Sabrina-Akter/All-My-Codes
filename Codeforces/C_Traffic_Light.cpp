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
        ll n;
        char c;
        string s;
        cin >> n >> c >> s;
        if(c == 'g') cout << 0 << nl;
        else
        {
            ll tt = 2, mx = 0, last = -1, x = 0;
            while(tt--)
            {
                for(ll i = 0; i < n; i++)
                {
                    if(s[i] == c && last == -1) last = x;
                    else if(last != -1 && s[i] == 'g')
                    {
                        mx = max(mx, x - last);
                        last = -1;
                    }
                    x++;
                }
            }
            cout << mx << nl;
        }
    }
    return 0;
}