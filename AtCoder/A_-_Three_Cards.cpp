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
    ll n, i;
    cin >> n;
    vll v(n);
    vector <string> S, y;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(all(v), greater<ll>());
    for(i=0;i<3;i++)
    {
        string x;
        x = to_string(v[i]);
        S.pb(x);
    }
    string a, b, c, d, e, f;
    a+=S[0]+S[1]+S[2];
    b+=S[0]+S[2]+S[1];
    c+=S[1]+S[0]+S[2];
    d+=S[1]+S[2]+S[0];
    e+=S[2]+S[0]+S[1];
    f+=S[2]+S[1]+S[0];
    y.pb(a);
    y.pb(b);
    y.pb(c);
    y.pb(d);
    y.pb(e);
    y.pb(f);
    sort(all(y));
    cout << y[y.size()-1] << nl;
    return 0;
}