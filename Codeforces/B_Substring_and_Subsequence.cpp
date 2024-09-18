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

int dp[1001][1001];
int rec(int i, int j, string &str, string &rev)
{
    if(i == str.size() || j == rev.size()) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    else if(str[i] == rev[j])
    {
        return dp[i][j] = 1 + rec(i + 1, j + 1, str, rev);
    }
    else
    {
        int choice1 = rec(i + 1, j, str, rev);
        int choice2 = rec(i, j + 1, str, rev);
        return dp[i][j] = max(choice1, choice2);
    }
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        memset(dp, -1, sizeof(dp));
        int lcs = rec(0, 0, s1, s2);
        int a = s1.size() - lcs;
        int b = s2.size() - lcs;
        cout << a + b + lcs << nl;
    }
    return 0;
}