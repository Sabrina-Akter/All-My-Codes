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

vector <ll> v;
ll dp[100005];
int f(ll n)
{
    ll cost = LONG_LONG_MAX;
    if(n==0)
    {
        return dp[0] = 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    if(n-1>=0)
    {
        cost = min(cost, f(n-1)+abs(v[n]-v[n-1]));
        cout << "a = " << n << endl;
    }
    if(n-2>=0)
    {
        cost = min(cost, f(n-2)+abs(v[n]-v[n-2]));
        cout << "b = " << n << endl;
    }
    return dp[n] = cost;
}

int main()
{
    fastt;
    memset(dp, -1, sizeof dp);
    ll n, x, i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.pb(x);
    }
    cout << f(n-1);
    return 0;
}