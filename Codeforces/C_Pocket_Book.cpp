#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    ll n, m, p = 1000000007, ans = 1;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < m; i++)
    {
        vector<bool> v(26, false);
        for (int j = 0; j < n; j++)
        {
            v[int(s[j][i] - 'A')] = true;
        }

        ll cnt = 0;
        for (int j = 0; j < 26; j++)
        {
            if (v[j])
            {
                cnt++;
            }
        }

        ans = (ans * cnt) % p;
    }

    cout << ans << '\n';

    return 0;
}