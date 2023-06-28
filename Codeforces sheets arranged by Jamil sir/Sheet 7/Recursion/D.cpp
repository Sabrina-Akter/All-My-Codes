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

unordered_map <ll, ll> m;

ll f(ll n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        m[n] = f(n/10);
        cout << n%10 << " ";
        return m[n];
    }
}

int main()
{
    fastt;
    ll t, n;
    cin >> t;
    while(t--)
    {
         cin >> n;
         f(n);
         cout << nl;
    }
    return 0;
}
