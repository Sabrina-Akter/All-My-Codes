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
        ll n, i, sum=0, mx = LONG_LONG_MIN, mn = LONG_LONG_MIN, f=0, pos=-1, neg=-1;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]>0)
            {
                if(f==2)
                {
                    sum+=mn;
                    mn = LONG_LONG_MIN;
                }
                mx = max(mx, v[i]);
                f=1;
                pos=1;
                neg=0;
            }
            else
            {
                if(f==1)
                {
                    sum+=mx;
                    mx = LONG_LONG_MIN;
                }
                mn = max(mn, v[i]);
                f=2;
                pos=0;
                neg=1;
            }
        }
        if(pos==1)
        {
            sum+=mx;
        }
        else if(neg==1)
        {
            sum+=mn;
        }
        cout << sum << nl;
    }
    return 0;
}