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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, f=0, dif, mx=0, mn=LONG_LONG_MAX;
        set <ll> s;
        cin >> n;
        vll v1(n), v2(n);
        for(i=0;i<n;i++)
        {
            cin >> v1[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> v2[i];
            if(v2[i]>v1[i])
            {
                f=1;
            }
            else
            {
                dif = v1[i]-v2[i];
                if(v2[i]!=0)
                {
                    s.insert(dif);
                    mn = min(mn, dif);
                }
                else
                {
                    mx = max(mx, dif);
                }
            }
        }
        if(f==1 || s.size()>1 || mx>mn)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
    return 0;
}