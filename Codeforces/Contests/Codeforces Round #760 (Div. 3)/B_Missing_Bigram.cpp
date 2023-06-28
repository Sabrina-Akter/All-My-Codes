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
        ll n, i;
        cin >> n;
        string s, x;
        for(i=0;i<n-2;i++)
        {
            cin >> x;
            if(i==0)
            {
                s.pb(x[0]);
                s.pb(x[1]);
            }
            else
            {
                if(x[0]==s[s.size()-1])
                {
                    s.pb(x[1]);
                }
                else
                {
                    s.pb(x[0]);
                    s.pb(x[1]);
                }
            }
        }
        ll k=s.size();
        for(i=0;i<n-k;i++)
        {
            s.pb('a');
        }
        cout << s << nl;
    }
    return 0;
}