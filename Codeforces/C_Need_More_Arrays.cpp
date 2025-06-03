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
        ll n, x, ans = 0, last;
        cin >> n;
        for(ll i = 0; i < n; i++)
        {
            cin >> x;
            if(i == 0)
            {
                ans = 1;
                last = x;
            }
            else if(last + 1 < x) 
            {
                ans++;
                last = x;
            }
        }
        cout << ans << nl;
    }
    return 0;
}