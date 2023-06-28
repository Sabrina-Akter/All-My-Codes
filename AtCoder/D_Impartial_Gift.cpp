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
    ll a, b, d, i;
    cin >> a >> b >> d;
    vll v1(a), v2(b);
    for(i=0;i<a;i++)
    {
        cin >> v1[i];
    }
    for(i=0;i<b;i++)
    {
        cin >> v2[i];
    }
    sort(all(v1));
    sort(all(v2));
    ll ans = LONG_LONG_MIN;
    for(i=0;i<a;i++)
    {
        ll A = v1[i];
        auto it = ub(all(v2), A);
        it--;
        if(abs(A-(*it))<=d)
        {
            ans = max(ans, A+(*it));
        }
    }
    for(i=0;i<b;i++)
    {
        ll A = v2[i];
        auto it = ub(all(v1), A);
        it--;
        if(abs(A-(*it))<=d)
        {
            ans = max(ans, A+(*it));
        }
    }
    if(ans==LONG_LONG_MIN)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << ans << nl;
    }
    return 0;
}