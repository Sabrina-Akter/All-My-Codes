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
#define sz(x) (long long)(x).size()
#define rev(x) reverse(x.begin(), x.end())
 
const int MOD = 1000000007;
const char nl = '\n';
 
int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves
 
int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move
 
ll cell(ll Query_Row, ll Query_Column, ll Column)
{
    ll cell_no = ((Query_Row - 1) * Column) + Query_Column;
    return cell_no;
}
 
int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, i, m, flag=0, mx=0;
        cin >> n >> k;
        if (k >= n)
        {
            cout << 1 << nl;
        }
        else if(k==1)
        {
            cout << n << nl;
        }
        else
        {
            for (i=2;i<=sqrt(n);i++)
            {
                m = n/i;
                if(n%i==0)
                {
                    if(m<=k)
                    {
                        cout << i << nl;
                        flag=1;
                        break;
                    }
                    else
                    {
                        if(i<=k)
                        {
                            mx = max(i, mx);
                        }
                    }
                }
            }
            if(flag==0)
            {
                if(mx==0)
                {
                    cout << n << nl;
                }
                else
                {
                    cout << n/mx << nl;
                }
            }
        }
    }
    return 0;
}