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
        ll n, i;
        string s;
        cin >> n >> s;
        if(s[0]!='9')
        {
            for(i=0;i<s.size();i++)
            {
                cout << '9'-s[i];
            }
        }
        else
        {
            ll c=0;
            vll v(n);
            for(i=n-1;i>=0;i--)
            {
                ll num = s[i]-'0';
                num+=c;
                if(num<=1)
                {
                    c=0;
                    v[i] = 1-num;
                }
                else
                {
                    c=1;
                    v[i] = 11-num;
                }
            }
            for(i=0;i<v.size();i++)
            {
                cout << v[i];
            }
        }
        cout << nl;
    }
    return 0;
}