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
        ll n, x, sum = 0, mx = LONG_LONG_MIN, last;
        cin >> n;
        for(ll i = 0; i < n; i++)
        {
            cin >> x;
            if(i == 0 || sum == 0)
            {
                if(x % 2 == 0) last = 1;
                else last = 0;
            }
            if(last % 2 == 0 && x % 2 == 0)
            {
                sum = x;
                last = x;
            }
            else if(last % 2 != 0 && x % 2 != 0)
            {
                sum = x;
                last = x;
            }
            else
            {
                sum += x;
                last = x;
            }
            mx = max(mx, sum);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        cout << mx << nl;
    }
    return 0;
}