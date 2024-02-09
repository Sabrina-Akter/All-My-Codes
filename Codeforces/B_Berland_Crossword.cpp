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
        ll n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;
        bool up = true, right = true, down = true, left = true;
        //UP
        if(u >= n - 1)
        {
            if(u == n - 1)
            {
                if(l >= 1 || r >= 1) up = true;
                else up = false;
            }
            else if(u == n)
            {
                if(l >= 1 && r >= 1) up = true;
                else up = false;            
            }
        }
        //RIGHT
        if(r >= n - 1)
        {
            if(r == n - 1)
            {
                if(u >= 1 || d >= 1) right = true;
                else right = false;
            }
            else if(r == n)
            {
                if(u >= 1 && d >= 1) right = true;
                else right = false;            
            }
        }
        //DOWN
        if(d >= n - 1)
        {
            if(d == n - 1)
            {
                if(l >= 1 || r >= 1) down = true;
                else down = false;
            }
            else if(d == n)
            {
                if(l >= 1 && r >= 1) down = true;
                else down = false;            
            }
        }
        //LEFT
        if(l >= n - 1)
        {
            if(l == n - 1)
            {
                if(u >= 1 || d >= 1) left = true;
                else left = false;
            }
            else if(l == n)
            {
                if(u >= 1 && d >= 1) left = true;
                else left = false;            
            }
        }
        if(up == true && right == true && down == right && left == true) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}