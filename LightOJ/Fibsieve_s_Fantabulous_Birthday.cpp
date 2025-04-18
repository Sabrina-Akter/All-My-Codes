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
    ll cs=0, t;
    cin >> t;
    while(t--)
    {
        cs++;
        cout << "Case " << cs << ": ";
        ll n, m, d;
        double D, N;
        cin >> N;
        n = N;
        D = sqrt(N);
        d = sqrt(n);
        if(d!=D)
        {
            d++;
        }
        m = (d*d)-(d-1);

        if(d%2!=0)
        {
            if(n>=m)
            {
                cout << ((d*d)-n)+1 << " " << d << nl;
            }
            else
            {
                cout << d << " " << n-((d-1)*(d-1)) << nl;
            }
        }
        else
        {
            if(n>=m)
            {
                cout << d << " " << ((d*d)-n)+1 << nl;
            }
            else
            {
                cout << n-((d-1)*(d-1)) << " " << d << nl;
            }
        }
    }
    return 0;
}