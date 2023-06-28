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
        ll n, d1, x, a, b, dif, num;
        double d2, k, s;
        cin >> n >> k;
        s = n-1;
        d1 = k/s;
        d2 = k/s;
        if(d1!=d2)
        {
            d1++;
        }
        a = (n*d1)-1;
        b = s*d1;
        dif = abs(b-k);
        num = a-dif;
        cout << fixed << setprecision(0) << num << nl;
    }
    return 0;
}