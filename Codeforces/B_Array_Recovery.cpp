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
        ll n, i, x, y, f=0;
        cin >> n;
        vll a(n), b(n);
        for(i=0;i<n;i++)
        {
            cin >> b[i];
            if(i==0)
            {
                a[i] = b[i];
            }
            else
            {
                x = a[i-1]+b[i], y = a[i-1]-b[i];
                if(x>=0 && y>=0 && x!=y)
                {
                    f=1;
                }
                else
                {
                    if(x>=0)
                    {
                        a[i] = x;
                    }
                    else if(y>=0)
                    {
                        a[i] = y;
                    }
                }
            }
        }
        if(f==1)
        {
            cout << -1 << nl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cout << a[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}