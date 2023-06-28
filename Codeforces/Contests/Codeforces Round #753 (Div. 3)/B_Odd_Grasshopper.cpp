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
        ll n, x, one, three, k, ans, r;
        cin >> n >> x;
        r = x%4;
        if(n%2==0)
        {
            if(x%2==0)
            {
                if(x==0)
                {
                    cout << n << nl;
                }
                else if(x%4==0)
                {
                    cout << n << nl;
                }
                else
                {
                    cout << n+1 << nl;
                }
            }
            else
            {
                one = (n-1);
                three = n+4;
                k = x/4;
                // cout << "k = " << k << nl;
                // cout << "r = " << r << nl;
                // cout << "one = " << one << nl;
                // cout << "three = " << three << nl;
                if(r==1)
                {
                    ans = one-(k*4);
                }
                else if(r==3)
                {
                    ans = three+(k*4);
                }
                if(x==1)
                {
                    cout << one << nl;
                }
                else if(x==3)
                {
                    cout << three << nl;
                }
                else
                {
                    cout << ans << nl;
                }
            }
        }
        else
        {
            if(x%2==0)
            {
                if(x==0)
                {
                    cout << n << nl;
                }
                else if(x%4==0)
                {
                    cout << n << nl;
                }
                else
                {
                    cout << n-1 << nl;
                }
            }
            else
            {
                one = (n+1);
                three = n-4;
                k = x/4;
                // cout << "k = " << k << nl;
                // cout << "r = " << r << nl;
                // cout << "one = " << one << nl;
                // cout << "three = " << three << nl;
                if(r==3)
                {
                    ans = three-(k*4);
                }
                else if(r==1)
                {
                    ans = one+(k*4);
                }
                if(x==1)
                {
                    cout << one << nl;
                }
                else if(x==3)
                {
                    cout << three << nl;
                }
                else
                {
                    cout << ans << nl;
                }
            }
        }
    }
    return 0;
}