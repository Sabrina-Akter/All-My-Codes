#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll unsigned long long int
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

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, x, y, f = 0;
        cin >> n;
        vector<pll> vp(n);
        for (i = 0; i < n; i++)
        {
            cin >> x >> y;
            vp[i].first = x;
            vp[i].second = y;
        }
        for (i = 0; i < n; i++)
        {
            ll F1, F2, S1, S2;
            F1 = vp[i].first;
            S1 = vp[i].second;
            F2 = vp[i - 1].first;
            S2 = vp[i - 1].second;
            if (i == 0)
            {
                F2 = vp[n - 1].first;
                vp[i - 1].first = F2;
                S2 = vp[n - 1].second;
                vp[i - 1].second = S2;
            }
            if (S1 >= F1)
            {
                S1 = S1 - F1;
                vp[i].second = S1;
            }
            else if (S1 + S2 >= F1)
            {
                S2 = F1 - S1;
                vp[i - 1].second = S2;
            }
            else
            {
                f = 1;
                break;
            }
            cout << F1 << " " << S1 << nl;
            cout << F2 << " " << S2 << nl;
            cout << nl;
        }
        ll f;
        if (f == 0)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}