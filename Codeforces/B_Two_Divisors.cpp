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

int lcm(int a, int b) 
{
    return (a / __gcd(a,b)) * b;
}

int main()
{
    fastt;
    ll t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a == 1) cout << b * b << nl;
        else if(b == a + 1) cout << a * b << nl;
        else if(b % a == 0) cout << b * (b / a) << nl;
        else cout << lcm(a, b) << nl;
    }
    return 0;
}