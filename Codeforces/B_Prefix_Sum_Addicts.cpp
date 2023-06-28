#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll, ll>
#define plll pair<pll, ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // L, R, D, U, TR, BR, TL, BL
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, i;
        cin >> n >> k;
        vll v(n+1), p(n+1);
        for(i=n-k;i<n;i++)
        {
            cin >> p[i];
        }
        if(n==1 || k==1)
        {
            cout << "Yes" << nl;
        }
        else
        {
            ll last=0;
            for(i=n-1;i>n-k;i--)
            {
                v[i] = p[i] - p[i-1];
                last = v[i];
            }
            for(i=n-k;i>0;i--)
            {
                v[i] = last;
                p[i] = p[i+1] - last;
            }
            p[0] = p[1] - last;
            v[0] = p[0];
            ll f=0;
            for(i=1;i<n;i++)
            {
                if(v[i]<v[i-1])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout << "Yes" << nl;
            }
            else
            {
                cout << "No" << nl;
            }
        }
    }
    return 0;
}