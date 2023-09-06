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
        ll n, i, x, reach, mn=LONG_LONG_MAX, cnt=1;
        cin >> n;
        x = (n*(n-1))/2, reach=n-1;
        vll v1(x), v2;
        for(i=0;i<x;i++)
        {
            cin >> v1[i];
        }
        sort(all(v1));
        for(i=0;i<x;i++)
        {
            if(cnt==reach)
            {
                mn = min(mn, v1[i]);
                v2.pb(mn);
                cnt=1;
                mn=LONG_LONG_MAX;
                reach--;
            }
            else
            {
                mn = min(mn, v1[i]);
                cnt++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout << v2[n-2] << nl;
            }
            else
            {
                cout << v2[i] << " ";
            }
        }
    }
    return 0;
}