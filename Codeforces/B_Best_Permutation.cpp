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
#define sp " "

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
        ll n, i, N;
        cin >> n;
        N = n;
        if(n==5)
        {
            cout << 1 << sp << 2 << sp << 3 << sp << 4 << sp << 5;
        }
        else
        {
            if(n%2!=0)
            {
                N = n-1;
                cout << n-2 << sp;
            }
            for(i=2;i<=N-2;i+=2)
            {
                cout << i << sp << i-1 << sp;
            }
            cout << n-1 << sp << n;
        }
        cout << nl;
    }
    return 0;
}