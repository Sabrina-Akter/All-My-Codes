#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define all(x) x.begin(), x.end()
const char nl = '\n';

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {   
        ll a, b, c, d, mx, mn, cnt;
        cin >> a >> b >> c >> d;
        vll v = {a, b, c, d};
        sort(all(v));
        mx = max(a, c);
        mn = min(b, d);
        if(mx > mn) cout << 1 << nl;
        else
        {
            cnt = mn - mx;
            if(v[0] < mx) cnt++;
            if(v[3] > mn) cnt++;
            cout << cnt << nl;
        }
    }
    return 0;
}