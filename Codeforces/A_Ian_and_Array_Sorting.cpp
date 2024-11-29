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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, mx = 100000000000, x;
        cin >> n;
        vll v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        for(int i = n - 1; i > 0; i--)
        {
            if(v[i] < mx)
            {
                x = mx - v[i];
                v[i] += x;
                v[i - 1] += x;
            }
            else
            {
                x = v[i] - mx;
                v[i] -= x;
                v[i - 1] -= x;
            }
        }
        bool yes = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(v[i] > v[i + 1])
            {
                yes = false;
                break;
            }
        }
        if(yes) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}