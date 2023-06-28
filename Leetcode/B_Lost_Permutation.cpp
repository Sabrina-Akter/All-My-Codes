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
        ll n, z, x, i, sum=0, mx=LONG_LONG_MIN, f=0;
        cin >> n >> z;
        map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            m[x]++;
            mx = max(mx, x);
        }
        for(i=1;i<=2000;i++)
        {
            if(sum>z)
            {
                cout << "NO" << nl;
                break;
            }
            else if(sum==z && f==1)
            {
                cout << "YES" << nl;
                break;
            }
            if(i<=mx)
            {
                if(m[i]!=1)
                {
                    sum+=i;
                }
                if(i==mx)
                {
                    f=1;
                }
            }
            else
            {
                if(m[i]!=1)
                {
                    sum+=i;
                }
            }
        }
    }
    return 0;
}