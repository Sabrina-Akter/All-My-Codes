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

int main()
{
    fastt;
    ll n, m, a, b, c, d, mx, mn;
    cin >> n >> m;
    //For max
    a = m-1;
    b = n-a;
    mx = (b*(b-1))/2;
    //For min
    a = n/m;
    b = n%m;
    c = (a*(a+1))/2;
    c = b*c;
    d = (a*(a-1))/2;
    d = (m-b)*d;
    mn = c+d;
    cout << mn << " " << mx << nl;
    return 0;
}
