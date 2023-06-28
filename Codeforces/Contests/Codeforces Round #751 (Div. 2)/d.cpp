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
        ll A[12][2010];
        unordered_map <ll, ll> m;
        ll i, j, n;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            A[0][i] = v[i];
            m[v[i]]++;
        }
        for(i=1;i<=10;i++)
        {
            for(j=0;j<n;j++)
            {
                v[j] = m[v[j]];
                A[i][j] = v[j];
            }
            m.clear();
            for(j=0;j<n;j++)
            {
                m[v[j]]++;
            }
        }
        ll q;
        cin >> q;
        for(i=0;i<q;i++)
        {
            ll x, y;
            cin >> x >> y;
            x--;
            if(y>10)
            {
                y = 10;
            }
            cout << A[y][x] << nl;
        }
    }
    return 0;
}