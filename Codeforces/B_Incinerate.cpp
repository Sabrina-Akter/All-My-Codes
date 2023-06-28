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
        ll n, k, i;
        cin >> n >> k;
        vll v(n), p(n);
        vector <pair<ll, ll> > vp(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> p[i];
            vp[i].first = v[i], vp[i].second = p[i];
        }
        sort(all(vp));
        reverse(all(vp));
        for(i=0;i<n;i++)
        {
            ll div = vp[i].first/k;
            if(vp[i].first%k!=0)
            {
                div++;
            }
            vp[i].first = div;
        }
        sort(all(vp));
        for(i=0;i<n;i++)
        {
            cout << vp[i].first-1 << " " << vp[i].second << nl;
        }
        cout << "END" << nl;
    }
    return 0;
}