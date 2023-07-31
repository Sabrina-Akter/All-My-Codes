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
        ll n, x, i, sum=0;
        cin >> n >> x;
        vll v(n), pref(n), suf(n+1);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            sum+=v[i];
            pref[i] = sum;
        }
        sum=0;
        for(i=n-1;i>=0;i--)
        {
            sum+=v[i];
            suf[i] = sum;
        }
        if(sum%x!=0)
        {
            cout << n << nl;
        }
        else
        {
            ll mx=0, pc=0, sc=0;
            for(i=0;i<n;i++)
            {
                //cout << pref[i] << " " << suf[i+1] << nl;
                pc = i+1;
                sc = n-i-1;
                if(pref[i]%x!=0)
                {
                    mx = max(mx, pc);
                }
                if(suf[i+1]%x!=0)
                {
                    mx = max(mx, sc);
                }
            }
            if(mx==0)
            {
                mx = -1;
            }
            cout << mx << nl;
        }
    }
    return 0;
}