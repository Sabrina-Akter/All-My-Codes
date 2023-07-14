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
        map <ll, ll> m;
        ll n, i, j, need, f, x;
        cin >> n;
        ll ar[n][n];
        need = (n*n)+1;
        i=0, j=0, f=-1;
        while(need--)
        {
            if(need==0)
            {
                break;
            }
            if(i==0 && j==0 && f==-1)
            {
                ar[i][j] = 1;
                m[1] = 1;
                f=0;
            }
            else
            {
                if(f==0)
                {
                    if(ar[i][j]+need<=(n*n) && m[ar[i][j]+need]==0)
                    {
                        x = ar[i][j]+need;
                    }
                    else
                    {
                        x = ar[i][j]-need;
                    }
                    if(j+1<n)
                    {
                        j++;
                    }
                    else
                    {
                        i++;
                        f=1;
                    }
                    ar[i][j] = x;
                    m[x] = 1;
                }
                else if(f==1)
                {
                    if(ar[i][j]+need<=(n*n) && m[ar[i][j]+need]==0)
                    {
                        x = ar[i][j]+need;
                    }
                    else
                    {
                        x = ar[i][j]-need;
                    }
                    if(j-1>=0)
                    {
                        j--;
                    }
                    else
                    {
                        i++;
                        f=0;
                    }
                    ar[i][j] = x;
                    m[x] = 1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout << ar[i][j] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}