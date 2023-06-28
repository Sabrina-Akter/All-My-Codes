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
        ll m, i, flag=0, n, num, z;
        cin >> m;
        n = m;
        z = m;
        while(1)
        {
            num = n%10;
            if(num>0)
            {
                if(z%num!=0)
                {
                    flag=1;
                }
            }
            n=n/10;
            if(flag==1)
            {
                z++;
                n = z;
                flag=0;
            }
            else if(flag==0)
            {
                if(n==0)
                {
                    cout << z << nl;
                    break;
                }
            }
        }
    }
    return 0;
}