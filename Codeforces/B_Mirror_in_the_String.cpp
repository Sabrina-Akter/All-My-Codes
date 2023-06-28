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
        ll i, n, x=0;
        cin >> n;
        string s, S;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            string a, b;
            a.pb(s[i]);
            a.pb(s[i]);
            b.pb(s[i]);
            b.pb(s[i+1]);
            if(a<b)
            {
                S.pb(s[i]);
                break;
            }
            else if(a==b)
            {
                S.pb(s[i]);
                if(i==0)
                {
                    break;
                }
            }
            else
            {
                S.pb(s[i]);
            }
            x++;
        }
        if(x==s.size()) x=x-1;
        for(i=x;i>=0;i--)
        {
            S.pb(s[i]);
        }
        cout << S << nl;
    }
    return 0;
}