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
        ll n, i;
        cin >> n;

        vll arr(n);
        map<ll, ll> freq;

        ll ans = 0, sum = 0;

        for(i=0;i<n;i++)
        {
            cin >> arr[i];

            sum += arr[i];
            ++freq[arr[i]];
        }

        if ((2 * sum) % n != 0)
        {
            cout << 0;
            cout << nl;
            continue;
        }

        sort(all(arr));

        ll remove_sum = (2 * sum) / n;

        for(i=0;i<n;i++)
        {
            if (arr[i] > remove_sum / 2)
                break;

            ll a1 = arr[i];
            ll a2 = remove_sum - arr[i];

            ll cnt = freq[a2];

            if (a1 == a2)
            {
                ans += (cnt * (cnt - 1)) / 2;
                break;
            }

            ans += freq[a2];
        }

        cout << ans;
        cout << nl;
    }
    return 0;
}