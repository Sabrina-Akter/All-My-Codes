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
        ll n;
        cin >> n;
        if(n%2==0)
        {
            cout << -1 << nl;
        }
        else
        {
            ll A[n+1][n+1];
            ms(A);
            ll i, j, k;
            for(k=1;k<=n;k++)
            {
                A[k][k] = k;
                j = k;
                for(i=k+1;i<=n;i++)
                {
                    j--;
                    A[j][i] = k;
                }
                j = k;
                for(i=k-1;i>=1;i--)
                {
                    j++;
                    A[j][i] = k;
                }
            }
            ll m = (n/2)+1;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(A[i][j]==0)
                    {
                        if(m==n)
                        {
                            m=0;
                        }
                        m++;
                        cout << m << " ";
                    }
                    else
                    {
                        cout << A[i][j] << " ";
                    }
                }
                cout << nl;
                m = (n/2)+1;
            }
        }
    }
    return 0;
}