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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    map<int, int> prime;
    int i, j, f, n;
    for(i=1;i<=1000;i++)
    {
        f=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            prime[i] = 1;
        }
    }
    cin >> n;
    if(prime[n]==1)
    {
        cout << "NO PUNISHMENT" << nl;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            cout << "I DID NOT DO THE ASSIGNMENT." << nl;
        }
    }
    return 0;
}