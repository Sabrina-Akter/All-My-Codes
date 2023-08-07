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
        ll i, j, n, mn=LONG_MAX, d;
        cin >> n;
        vll v(n), s;
        unordered_map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
        }
        for(i=0;i<n;i++)
        {
            d = v[i]-mn;
            if((d==0) || (m[d]==1))
            {
                continue;
            }
            else
            {
                s.pb(d);
                m[d]=1;
            }
        }
        if(s.size()==0)
        {
            cout << -1 << nl;
        }
        else if(s.size()==1)
        {
            cout << s[0] << nl;
        }
        else
        {
            mn=LONG_MAX;
            for(i=0; i<s.size(); i++)
            {
                for(j=i+1; j<s.size(); j++)
                {
                    mn = min(__gcd(s[i], s[j]), mn);
                }
            }
            cout << mn << nl;
        }
    }
    return 0;
}










