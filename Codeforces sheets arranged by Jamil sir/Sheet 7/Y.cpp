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
#define sz(x) (long long)(x).size()

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move


ll dp[20];

ll f(ll n)
{
    if(n==1 || n==2)
    {
        dp[n] = n;
        return n;
    }
    else if(n==3)
    {
        dp[3] = 4;
        return 4;
    }
    else
    {
        dp[n] = f(n-1)+f(n-2)+f(n-3);
        return dp[n];
    }
}

int main()
{
    fastt;
    dp[0] = 1;
    f(19);
    ll a, b, c;
    cin >> a >> b;
    c = b-a;
    cout << dp[c] << nl;
    return 0;
}