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
        ll n, cnt = 0, zero = 0;
        cin >> n;
        vll v(n);
        ll mn = LONG_LONG_MAX, pos_min = LONG_LONG_MAX;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 0) zero++;
            if(v[i] <= 0) cnt++;
            if(v[i] > 0) pos_min = min(pos_min, v[i]);
        }
        ll min_dif = LONG_LONG_MAX;
        if(zero > 1) min_dif = 0;
        for(int i = 0; i < n; i++)
        {
            if(i != 0 && v[i] <= 0)
            {
                min_dif = min(min_dif, abs(mn - v[i]));
                cout << "min dif = " << min_dif << nl;
            }
        }
        cout << mn << " " << pos_min << " " << min_dif << nl;
        if(pos_min != LONG_LONG_MAX && min_dif != LONG_LONG_MAX && min_dif >= pos_min) cnt++;
        cout << cnt << nl;
    }
    return 0;
}