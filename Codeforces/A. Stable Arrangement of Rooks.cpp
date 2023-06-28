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
        ll n, k, i, j, c=0;
        cin >> n >> k;
        for(i=1;i<=n;i++)
        {
            if(c<k)
            {
                c++;
            }
            i++;
        }
        if(c==k)
        {
            c=0;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if((i%2!=0) && (i==j) && (c<k))
                    {
                        cout << "R";
                        c++;
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << nl;
            }
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}