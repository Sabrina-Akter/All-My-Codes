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
        ll n, i;
        cin >> n;
        ll sq = sqrt(n);
        if((sq*sq)==n)
        {
            cout << 0 << " ";
            for(i=n-1;i>=1;i--)
            {
                cout << i << " ";
            }
            cout << nl;
        }
        else if(((sq*sq))==n-1)
        {
            for(i=n-1;i>=0;i--)
            {
                cout << i << " ";
            }
            cout << nl;
        }
        else
        {
            sq++;
            ll x=(sq)*(sq), num, i=n-1;
            vll m(n+1), v(n+1), z(n+1);
            while(1)
            {
                num = x-i;
                m[num]++;
                if(m[num]==1 && num<n)
                {
                    v[i] = num;
                }
                else
                {
                    sq--;
                    if(sq==-1)
                    {
                        break;
                    }
                    x = sq*sq;
                    i++;
                }
                i--;
                if(i==-1)
                {
                    break;
                }
            }
            for(i=0;i<n;i++)
            {
                cout << v[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}