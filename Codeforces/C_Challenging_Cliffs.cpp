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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, mn = LONG_LONG_MAX, a, b;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        for(i=1;i<n;i++)
        {
            if(abs(v[i-1]-v[i])<mn)
            {
                mn = abs(v[i-1]-v[i]);
                a = i-1, b = i;
            }
        }
        cout << v[a] << " ";
        for(i=b+1;i<n;i++)
        {
            cout << v[i] << " ";
        }
        for(i=0;i<a;i++)
        {
            cout << v[i] << " ";
        }
        cout << v[b] << nl;
    }
    return 0;
}