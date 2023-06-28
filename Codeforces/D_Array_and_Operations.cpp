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
        ll n, k, i, sum=0;
        cin >> n >> k;
        vll v(n), v1, v2;
        map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        reverse(all(v));
        for(i=0;i<n;i++)
        {
            if(i<k)
            {
                v1.pb(v[i]);
            }
            else if(i<(2*k))
            {
                v2.pb(v[i]);
            }
            else
            {
                sum+=v[i];
            }
        }
        for(i=0;i<v1.size();i++)
        {
            sum+=min(v1[i],v2[i])/max(v1[i],v2[i]);
        }
        cout << sum << nl;
    }
    return 0;
}