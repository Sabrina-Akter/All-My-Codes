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
        ll a, b, sum, r, m;
        cin >> a >> b;
        sum = a+b;
        r = sum/2;
        if(sum%2==0)
        {
            if(a==0 || b==0)
            {
                if(a>=b)
                {
                    cout << r << " " << 0 << nl;
                }
                else
                {
                    cout << 0 << " " << r << nl;
                }
            }
            else if(a>=b)
            {
                m = abs(a-r);
                cout << m << " " << r-m << nl;
            }
            else if(b>a)
            {
                m = abs(b-r);
                cout << r-m << " " << m << nl;
            }
        }
        else
        {
            cout << -1 << " " << -1 << nl;
        }
    }
    return 0;
}