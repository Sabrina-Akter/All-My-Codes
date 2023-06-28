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
    ll a, b, i, j, mn=LONG_LONG_MAX, cnt=0, x=LONG_LONG_MAX;
    cin >> a >> b;
    string s;
    cin >> s;
    string A="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(i=0;i<b;i++)
    {
        cnt=0;
        for(j=0;j<s.size();j++)
        { 
            if(j==s.size()-1)
            {
                if(s[j]!=A[i])
                {
                    cnt++;
                }
            }
            else if(s[j]==A[i])
            {
                continue;
            }
            else
            {
                if(s[j]==s[j+1])
                {
                    continue;
                }
                else
                {
                    cnt++;
                }
            }
        }
        if(cnt!=0)
        {
            mn = min(cnt, mn);
        }
    }
    if(x==mn)
    {
        mn = 0;
    }
    cout << mn << nl;
    return 0;
}