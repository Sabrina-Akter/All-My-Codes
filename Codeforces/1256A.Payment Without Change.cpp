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
    ll q;
    cin >> q;
    while(q--)
    {
        ll a, b, n, s; 
        double x, y, z, flag=0;
        cin >> a >> b >> n >> s;
        x = s/n;
        if(x<=a)
        {
            y = s%n;
            if(y<=b)
            {
                cout << "YES" << nl;
                flag=1;
            }
        }
        else
        {
            if(b>=s)
            {
                cout << "YES" << nl;
                flag=1;
            }
            else
            {
                z = s-b;
                y = z/n;
                if(y<=a)
                {
                    cout << "YES" << nl;
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}