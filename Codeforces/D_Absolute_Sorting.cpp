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
        vll v(n);
        bool asc = true, des = true;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i > 0)
            {
                if(v[i - 1] > v[i]) asc = false;
                else if(v[i - 1] < v[i]) des = false;
            }
        }
        if(asc == true) cout << 0 << nl;
        else if(des == true) cout << v[0] << nl;
        else
        {
            ll mx = *max_element(all(v));
            ll mn = *min_element(all(v));
            ll sum = mx + mn;
            ll mid = sum / 2;
            if(sum % 2 != 0) mid += 1;
            asc = true;
            for(ll i = 0; i < n; i++)
            {
                v[i] = abs(mid - v[i]);
                if(i > 0)
                {
                    if(v[i - 1] > v[i]) asc = false;
                }
            }
            if(asc == true) cout << mid << nl;
            else cout << -1 << nl;
        }
    }
    return 0;
}