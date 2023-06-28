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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, i, j, f=0, num;
        cin >> n >> m;
        ll A[n][m];
        string s;
        for(i=0;i<n;i++)
        {
            cin >> s;
            for(j=0;j<s.size();j++)
            {
                if(s[j]=='1')
                {
                    num = 1;
                }
                else
                {
                    num = 0;
                }
                A[i][j] = num;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(A[i][j]==0)
                {
                    if((A[i][j-1]==1 && A[i+1][j-1]==1 && A[i+1][j]==1) && (j-1>=0 && i+1<n))
                    {
                        f=1;
                    }
                    else if((A[i][j+1]==1 && A[i+1][j]==1 && A[i+1][j+1]==1) && (j+1<m && i+1<n))
                    {
                        f=1;
                    }
                    else if((A[i-1][j-1]==1 && A[i-1][j]==1 && A[i][j-1]==1) && (i-1>=0 && j-1>=0))
                    {
                        f=1;
                    }
                    else if((A[i-1][j]==1 && A[i-1][j+1]==1 && A[i][j+1]==1) && (i-1>=0 && j+1<m))
                    {
                        f=1;
                    }
                    if(f==1)
                    {
                        break;
                    }
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
    return 0;
}
