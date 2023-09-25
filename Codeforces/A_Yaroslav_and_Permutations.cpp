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

int main()
{
    fastt;
    ll n, i;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int continuous = 1, mx_continuous = 0;
    for (int i = 1; i < n; ++i)
    {
        if (v[i-1] == v[i])
        {
            continuous += 1;
            if (continuous > mx_continuous)
            {
                mx_continuous = continuous;
            }
        }
        else
        {
            continuous = 1;
        }
    }
    cout << (mx_continuous<=((n+1)/2) ? "YES" : "NO") << nl;
    return 0;
}