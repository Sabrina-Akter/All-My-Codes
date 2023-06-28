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
        ll n, i, less=0, great=0, ml = LONG_LONG_MIN, mg = LONG_LONG_MIN;
        cin >> n;
        string s;
        cin >> s;
        s+='.';
        for(i=0;i<s.size();i++)
        {
            if(i==0)
            {
                if(s[i]=='>')
                {
                    great++;
                }
                else
                {
                    less++;
                }
            }
            else
            {
                if(s[i]=='>')
                {
                    if(s[i-1]=='>')
                    {
                        great++;
                    }
                    else
                    {
                        ml = max(ml, less);
                        less=0;
                        great++;
                    }
                }
                else if(s[i]=='<')
                {
                    if(s[i-1]=='<')
                    {
                        less++;
                    }
                    else
                    {
                        mg = max(mg, great);
                        great=0;
                        less++;
                    }
                }
                else if(s[i]=='.')
                {
                    if(s[i-1]=='>')
                    {
                        mg = max(mg, great);
                    }
                    else
                    {
                        ml = max(ml, less);
                    }
                }
            }
        }
        cout << max(mg, ml)+1 << nl;
    }
    return 0;
}