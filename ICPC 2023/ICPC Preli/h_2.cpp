#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

bool f(vll& v, vector<vector<vector<int>>&> dp, ll num, ll i, ll count) {
    if (count == 0) {
        return num == 0;
    }
    if (i == v.size()) {
        return false;
    }

    if (dp[i][num][count] != -1) {
        return dp[i][num][count];
    }

    bool include = false, exclude = false;
    if (v[i] <= num) {
        include = f(v, dp, num - v[i], i + 1, count);
    }
    exclude = f(v, dp, num, i + 1, count);

    dp[i][num][count] = include || exclude;
    return dp[i][num][count];
}

int main() {
    fastt;
    ll t, cs = 0;
    cin >> t;
    while (t--) {
        cs++;
        cout << "Case " << cs << ":" << nl;
        ll n, i, x, sum = 0;
        cin >> n;
        vll v;
        for (i = 0; i < n; i++) {
            cin >> x;
            v.pb(x);
            sum += x;
            if (sum == 0) {
                cout << 1 << nl;
            } else if (i >= 2 && sum % 3 == 0) {
                ll num = sum / 3;
                vector<vector<vector<int>>> dp(n, vector<vector<int>>(num + 1, vector<int>(3, -1)));
                cout << f(v, dp, num, 0, 3) << nl;
            } else {
                cout << 0 << nl;
            }
        }
    }
    return 0;
}
