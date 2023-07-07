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
        ll n, k, q, i;
        cin >> n >> k >> q;
        vll v(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;

        ll cons = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                cons++;
                if (i == n - 1 or v[i + 1] > q)
                {
                    if (cons >= k)
                    {
                        ll x = cons - k + 1LL;
                        ll add = (x * (x + 1LL)) / 2LL;
                        ans += add;
                    }
                    cons = 0;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}