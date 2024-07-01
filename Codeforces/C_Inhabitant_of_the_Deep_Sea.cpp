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
        ll n, k, sum = 0;
        cin >> n >> k;
        vll v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(k >= sum)
        {
            cout << n << nl;
        }
        else
        {
            ll left = k / 2, right = left, l, r;
            if(left * 2 != k) left++;
            sum = 0;
            for(ll i = 0; i < n; i++)
            {
                if(sum + v[i] <= left)
                {
                    sum += v[i];
                    v[i] = 0;
                }
                else
                {
                    v[i] = (sum + v[i]) - left;
                    break;
                }
            }
            sum = 0;
            for(ll i = n - 1; i >= 0; i--)
            {
                if(sum + v[i] <= right)
                {
                    sum += v[i];
                    v[i] = 0;
                }
                else
                {
                    v[i] = (sum + v[i]) - right;
                    break;
                }
            }
            ll ans = 0;
            for(ll i = 0; i < n; i++)
            {
                if(v[i] != 0) ans++;
            }
            cout << n -  ans << nl;
        }       
    }
    return 0;
}