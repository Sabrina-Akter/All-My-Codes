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
    vll v(32769);
    ll i, j, p;
    for(i=1;i<=32768;i++)
    {
        p = i;
        for(j=1;j<=15;j++)
        {
            p*=2%32768;
            if(p%32768==0)
            {
                v[i] = min(j, 32768-i);
                break;
            }
        }
    }
    for(i=32768;i>=1;i--)
    {
        for(j=i-1;j>=i-15;j--)
        {
            if(j>=1)
            {
                v[j] = min(i-j+v[i], v[j]);
            }
        }
    }
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << v[n] << " ";
    }
    return 0;
}