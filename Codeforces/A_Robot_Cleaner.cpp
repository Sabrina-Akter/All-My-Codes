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
        ll n, m, x, y, a, b, d1=1, d2=1, tm=0;
        cin >> n >> m >> x >> y >> a >> b;
        while(1)
        {
            if(x==a || y==b)
            {
                cout << tm << nl;
                break;
            }
            tm++;
            if(x+d1==0 || x+d1==(n+1))
            {
                d1=(-1)*(d1);
            }
            if(y+d2==0 || y+d2==(m+1))
            {
                d2=(-1)*(d2);
            }
            x+=d1;
            y+=d2;
        }
    }
    return 0;
}