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
        ll n, k, i, j, cnt=0;
        cin >> n >> k;
        vll ar(n+5);
        vector <string> v;
        for(i=0;i<n;i++)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        char c, x;
        for(i=0;i<k;i++)
        {
            cnt=1;
            for(j=0;j<n;j++)
            {
                if(j==0)
                {
                    c = v[j][i];
                }
                else
                {
                    x = v[j][i];
                    if(c==x)
                    {
                        if(ar[j]==0)
                        {
                            cnt++;
                        }
                        else
                        {
                            ar[j] = 1;
                        }
                    }
                    else
                    {
                        ar[j] = 1;
                    }
                }
            }
        }
        cout << cnt << nl;
    }
    return 0;
}