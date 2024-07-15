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
        ll n;
        cin >> n;
        vll v1(n), v2(n + 1);
        for(ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for(ll i = 0; i < n + 1; i++)
        {
            cin >> v2[i];
        }
        ll need = v2[n];
        ll ans = 0;
        ll close = LONG_LONG_MAX;
        bool found = false;
        for(ll i = 0; i < n; i++)
        {
            if(v1[i] >= v2[i] && need <= v1[i] && need >= v2[i]) found = true;
            else if(v2[i] >= v1[i] && need <= v2[i] && need >= v1[i]) found = true;
            if(abs(need - v1[i]) < close)
            {
                close = abs(need - v1[i]);
            }
            if(abs(need - v2[i]) < close)
            {
                close = abs(need - v2[i]);
            }
            ans += abs(v1[i] - v2[i]);
        }
        ans++;
        if(found == false)
        {
            ans += close;
        }
        cout << ans << endl;
    }
    return 0;
}