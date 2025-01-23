#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    ll T, n, b, c, ans;
    ll a[200010];

    cin >> T;
    while (T--)
    {
        ans = 1;
        c = 0;

        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b = (i == 1 ? a[i] : (b & a[i]));
        }

        for (int i = 1; i <= n; i++)
        {
            if (a[i] == b)
            {
                c++;
            }
        }

        for (int i = 1; i <= n - 2; i++)
        {
            ans = ans * i % 1000000007;
        }

        cout << ans * c % 1000000007 * (c - 1) % 1000000007 << "\n";
    }

    return 0;
}
