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
        ll l, r, i, j;
        cin >> l >> r;
        vector <bitset<18>> b1(r+1);
        vector <bitset<18>> b2(r+1);
        for(i=0;i<r+1;i++)
        {
            ll n;
            cin >> n;
            bitset<18> a(n);
            b1[i] = a;
            bitset<18> b(i);
            b2[i] = b;
        }
        bitset<18> x(0);
        for(i=0;i<17;i++)
        {
            ll c1=0, c2=0;
            for(j=0;j<r+1;j++)
            {
                if(b1[j][i]&1)
                {
                    c1++;
                }
                if(b2[j][i]&1)
                {
                    c2++;
                }
            }
            if(c1!=c2)
            {
                x[i]=1;
            }
        }
        auto ans = x.to_ullong();
        cout << ans << nl;
    }
    return 0;
}