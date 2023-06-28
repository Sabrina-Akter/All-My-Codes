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
        ll n, m, i, j, x1, x2, x3, x4, y1, y2, y3, y4, d1, d2, d3, d4;
        cin >> n >> m;
        x1 = 1, y1 = 1;
        x2 = 1, y2 = m;
        x3 = n, y3 = 1;
        x4 = n, y4 = m;
        vll v;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                d1 = abs(i-x1)+abs(j-y1);
                d2 = abs(i-x2)+abs(j-y2);
                d3 = abs(i-x3)+abs(j-y3);
                d4 = abs(i-x4)+abs(j-y4);
                ll mn = max(max(d1, d2), max(d3, d4));
                v.pb(mn);
            }
        }
        sort(all(v));
        for(i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    return 0;
}