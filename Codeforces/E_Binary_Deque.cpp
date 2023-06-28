#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll, ll>
#define plll pair<pll, ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // L, R, D, U, TR, BR, TL, BL
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, i, one = 0;
        cin >> n >> m;
        vll v(n), left(n), right(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                one++;
            }
        }
        if (one < m)
        {
            cout << -1 << nl;
        }
        else if(one==m)
        {
            cout << 0 << nl;
        }
        else
        {
            // From Right
            ll x = LONG_LONG_MAX;
            for (i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    if (v[i] == 1)
                    {
                        right[i] = 0;
                        x = 1;
                    }
                    else
                    {
                        right[i] = x;
                    }
                }
                else
                {
                    if (v[i] == 1)
                    {
                        right[i] = 0;
                        x = 1;
                    }
                    else
                    {
                        if (v[i - 1] == 0)
                        {
                            if (x != LONG_LONG_MAX)
                            {
                                x++;
                            }
                        }
                        right[i] = x;
                    }
                }
            }
            // From Left
            x = LONG_LONG_MAX;
            for (i = n - 1; i >= 0; i--)
            {
                if (i == n - 1)
                {
                    if (v[i] == 1)
                    {
                        left[i] = 0;
                        x = 1;
                    }
                    else
                    {
                        left[i] = x;
                    }
                }
                else
                {
                    if (v[i] == 1)
                    {
                        left[i] = 0;
                        x = 1;
                    }
                    else
                    {
                        if (v[i + 1] == 0)
                        {
                            if (x != LONG_LONG_MAX)
                            {
                                x++;
                            }
                        }
                        left[i] = x;
                    }
                }
            }
            ll l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                if (one == m)
                {
                    break;
                }
                if (left[l] <= right[r])
                {
                    if (v[l] == 1)
                    {
                        one--;
                    }
                    l++;
                }
                else if (left[l] > right[r])
                {
                    if (v[r] == 1)
                    {
                        one--;
                    }
                    r--;
                }
                cnt++;
            }
            cout << cnt << nl;
        }
    }
    return 0;
}