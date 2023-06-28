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
        string s;
        cin >> s;
        ll i, n = s.size(), N=0;
        vll v;
        if(s[n-1]=='E')
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='N')
                {
                    N++;
                }
            }
            if(N==1)
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
            }
        }
        else
        {
            ll x=1;
            v.pb(1);
            for(i=0;i<n-1;i++)
            {
                if(s[i]=='E')
                {
                    v.pb(x);
                }
                else
                {
                    x++;
                    v.pb(x);
                }
            }
            if(v[n-1]==v[0])
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
            }
        }
    }
    return 0;
}