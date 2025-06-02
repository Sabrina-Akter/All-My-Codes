#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define pb push_back

int t[2000010], a[2000010], b[2000010], n, m;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1, x; i <= n; ++i)
    {
        cin >> x;
        t[a[i]] += x;
    }
    cin >> m;
    for (int i = 1; i <= m; ++i)
    {
        cin >> b[i];
    }
    ll ans = 1;
    for (int i = 1, x; i <= m; ++i)
    {
        cin >> x;
        t[b[i]] -= x;
    }
    for (int i = 1; i <= 2000000; ++i)
    {
        if (t[i] < 0)
        {
            cout << "0\n";
            return 0;
        }
        else if (t[i])
        {
            ans <<= 1;
            ans %= 998244353;
        }
    }
    cout << ans << '\n';
    return 0;
}