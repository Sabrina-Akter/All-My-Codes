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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            ll sum = (n * (n + 1)) / 2;
            sum--;
            ll d = sum / n;
            if (d % n != 0)
            {
                d++;
            }
            ll rest = (d * n) - sum;
            for (ll i = 1; i <= n; i++)
            {
                if (i == 1)
                {
                    cout << rest << " ";
                }
                else
                {
                    cout << i << " ";
                }
            }
            cout << nl;
        }
    }
    return 0;
}