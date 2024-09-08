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

int main()
{
    fastt;
    ll n, m, x, y;
    cin >> n >> m;
    vector <pair<ll, pair<ll, ll>>> p(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        p[i] = {x - y, {x, y}};
    }
    sort(all(p));
    vector <int> a(n), b(n);
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += p[i].second.first;
        a[i] = sum; 
    }
    sum = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        sum += p[i].second.second;
        b[i] = sum; 
    }
    ll mn = LONG_LONG_MAX;
    if(b[0] <= m) mn = n; 
    for(int i = 0; i < n; i++)
    {
        sum = a[i];
        if(i < n - 1) sum += b[i + 1];
        if(sum <= m)
        {
            mn = n - i - 1;
        }
    }
    if(mn == LONG_LONG_MAX) mn = -1;
    cout << mn << nl;
    return 0;
}