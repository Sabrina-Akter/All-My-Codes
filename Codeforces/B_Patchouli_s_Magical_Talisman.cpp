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
        ll n, i, x, mn=LONG_LONG_MAX, nn, num;
        cin >> n;
        vll odd, even;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x&1)
            {
                odd.pb(x);
            }
            else
            {
                even.pb(x);
                nn = x, num=0;
                while(1)
                {
                    if(nn&1)
                    {
                        mn = min(num, mn);
                        break;
                    }
                    else
                    {
                        nn = nn/2;
                        num++;
                    }
                }
            }
        }
        if(odd.size()!=0 && even.size()!=0)
        {
            cout << even.size() << nl;
        }
        else if(even.size()==0)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << mn+even.size()-1 << nl;
        }
    }
    return 0;
}