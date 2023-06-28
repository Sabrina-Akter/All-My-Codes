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
        ll n, x, i, j, num, f=0;
        cin >> n;
        vll v;
        for(i=1;i<=n;i++)
        {
            cin >> x;
            if(f==1)
            {
                if(x==num)
                {
                    v.pb(x);
                    reverse(all(v));
                    for(j=0;j<v.size();j++)
                    {
                        cout << v[j] << " ";
                    }
                    f=2;
                }
                else
                {
                    v.pb(x);
                }
            }
            else if(i==x && f==0)
            {
                cout << x << " ";
            }
            else if(f==0)
            {
                num=i;
                v.pb(x);
                f=1;
            }
            else if(f==2)
            {
                cout << x << " ";
            }
        }
        cout << nl;
    }
    return 0;
}