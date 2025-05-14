#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mxn = 2005;

ll n, a[mxn], t, k;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        if (k > 2)
        {
            cout << 0 << '\n';
            continue;
        }

        sort(a + 1, a + n + 1);
        ll ans = a[1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                ll x = a[i] - a[j];
                ans = min(x, ans);

                if (k == 2)
                {
                    int y = lower_bound(a + 1, a + n + 1, x) - a;
                    if (y <= n) ans = min({ans, a[y] - x});
                    if (y > 1) ans = min({ans, x - a[y - 1]});
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
