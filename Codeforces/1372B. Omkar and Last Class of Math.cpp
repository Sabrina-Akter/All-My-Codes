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

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    fastt;
    ll i, j, flag;
    unordered_map<ll, ll> p, h;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << nl;
        }
        else
        {
            flag = 0;
            for (i = 2; (i * i) <= n; i++)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                m = max(i, n/i);
                h[n] = m;
            }
            else
            {
                p[n] = 1;
            }
            if (p[n] == 1)
            {
                cout << 1 << " " << (n - 1) << nl;
            }
            else
            {
                cout << min(h[n], (n - h[n])) << " " << max(h[n], (n - h[n])) << nl;
            }
        }
    }
    return 0;
}
