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
        ll n; 
        cin >> n;
        ll a(-1), b(-1);
        bool ans = true;
        while(n--)
        {
            ll x; 
            cin >> x;
            if(x % 2)
            {
                if(a <= x)
                {
                    a = x;
                }
                else
                {
                    ans = false;
                }
            }
            else
            {
                if(b <= x)
                {
                    b = x;
                }
                else
                {
                    ans = false;
                }
            }
        }
        if(ans==true)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }
    return 0;
}