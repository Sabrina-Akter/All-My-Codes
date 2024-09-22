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
    ll n, q, k, last = 0, sum = 0, l, r;
    cin >> n >> q >> k;
    vll v(n), dif(n), pref(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++)
    {
        if(i + 1 < n)
        {
            dif[i] = v[i + 1] - last - 2;
        }
        else if(i == n - 1)
        {
            dif[i] = k + 1 - last - 2;
        }
        last = v[i];
    }
    for(int i = 0; i < n; i++)
    {
        sum += dif[i];
        pref[i] = sum;
    }
    for(int i = 0; i < q; i++)
    {
        cin >> l >> r;
        if(l == r) cout << k - 1 << nl;
        else if(r - l == 1) cout << v[l - 1] - 1 + k - v[r - 1] << nl;
        else 
        {
            ll temp1 = v[l - 1] - 1 + k - v[r - 1];
            ll temp2 = v[r - 2] - v[l - 1];
            ll total = temp1 + temp2;
            cout << total << nl;
        }
    }
    return 0;
}