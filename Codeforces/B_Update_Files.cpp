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
    ll t, i, p=1, a, b, c;
    double C;
    vll two;
    for(i=0;i<=64;i++)
    {
        p=p*2;
        two.pb(p);
    }
    cin >> t;
    while(t--)
    {
        ll n, k, r;
        cin >> n >> k;
        if(n==1)
        {
            cout << 0 << nl;
        }
        else
        {
            auto it = lb(all(two), k);
            a = *it;
            b = it-two.begin();
            r = n-a;
            if(r<0)
            {
                r = 0;
            }
            c = r/k;
            C = (double)(r)/(double)(k);
            if(c!=C)
            {
                c++;
            }
            cout << b+c+1 << nl;
        }
    }
    return 0;
}