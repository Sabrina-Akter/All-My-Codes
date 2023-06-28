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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

vector<vector<ll>> dp(200007, vector<ll>(33));

int main()
{
    fastt;
    ll i, j;

    for(i=0;i<32;i++)
    {
        for(j=1;j<200007;j++)
        {
            if((j >> i)&1)
            {
                dp[j][i] = 1;
            }
            dp[j][i]+= dp[j-1][i];
        }
    }

    ll t;
    cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        ll mx = 0;
        for(i=0;i<32;i++)
        {
            mx = max(mx, dp[r][i]-dp[l-1][i]);
        }
        cout << (r-l+1)-mx << endl;
    }
    return 0;
}


