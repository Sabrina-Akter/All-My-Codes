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
    ll n, q;
    cin >> n >> q;
    vll v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vll range(n + 2);
    ll l, r;
    for(int i = 0; i < q; i++)
    {
        cin >> l >> r;
        range[l] += 1;
        range[r + 1] += -1;
    }
    for(int i = 1; i < range.size(); i++)
    {
        range[i] = range[i] + range[i - 1];
    }
    sort(all(range));
    reverse(all(range));
    sort(all(v));
    reverse(all(v));
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += range[i] * v[i];
    }
    cout << sum << nl;
    return 0;
}