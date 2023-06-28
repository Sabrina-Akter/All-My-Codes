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
    ll a, b;
    float c;
    cin >> a >> b >> c;
    c = c+0.5;
    if(b==0)
    {
        b = 24;
    }
    if(a<b)
    {
        if(c>=a && c<b)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }
    else if(a>=b)
    {
        if((c>=a && c<=24) || (c>=0 && c<b))
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