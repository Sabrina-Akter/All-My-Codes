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
    ll A, B, X, Y, n=0, a=0, b=0;
    cin >> A >> B >> X >> Y;
    while(1)
    {
        n++;
        ll a_done=0;
        if(a<A)
        {
            if(n%X!=0)
            {
                a++;
                a_done=1;
            }
        }
        if(b<B)
        {
            if(n%Y!=0 && a_done==0)
            {
                b++;
            }
        }
        if(a==A && b==B)
        {
            cout << n << nl;
            break;
        }
    }
    return 0;
}