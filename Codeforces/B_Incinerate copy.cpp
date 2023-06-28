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
        ll n, k, i, mx=0;
        cin >> n >> k;
        vector <pair<ll, ll> > v(n);
        vll mnp(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i].first;
            mx = max(mx, v[i].first);
        }
        for(i=0;i<n;i++)
        {
            cin >> v[i].second;
        }
        sort(all(v));
        ll mn = LONG_LONG_MAX;
        for(i=n-1;i>=0;i--)
        {
            mn = min(mn, v[i].second);
            mnp[i] = mn;
        }
        i=0;
        ll sum=0;
        while(i<n)
        {
            sum+=k;
            while(i<n && v[i].first-sum<=0)
            {
                i++;
            }
            k-=mnp[i];
            if(k<=0 || i>=n)
            {
                break;
            }
        }
        if(sum>=mx)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}