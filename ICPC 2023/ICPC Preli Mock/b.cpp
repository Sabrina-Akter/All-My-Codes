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

ll p;

int f(int n, map<int, int> &m)
{
    if(n==1 || n==0)
    {
        return n;
    }
    else
    {
        int i, j;
        for(i=n;i>=2;i--)
        {
            cout << i << nl;
            for(j=1;j<=p;j++)
            {
                if(m[i, i-j]==0)
                {
                    cout << i << " " << i-j << " " << m[i, i-j] << nl;
                    f(i-j, m); 
                    m[i, i-j] = 1;      
                }       
            }
        }
        return 0;
    }
}


int main()
{
    fastt;
    ll n, k;
    cin >> n >> p >> k;
    map<int, int> m;
    f(n, m);
    return 0;
}