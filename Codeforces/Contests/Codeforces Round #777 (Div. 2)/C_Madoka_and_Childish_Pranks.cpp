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
        ll n, m, i, j, num, f=0, X1, Y1, X2, Y2;
        cin >> n >> m;
        ll A[n][m], B[n][m];
        vll x1, y1, x2, y2;
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
                B[i][j] = 0;
                if(A[0][0]==1)
                {
                    f=1;
                }
            }
        }
        if(f==1)
        {
            cout << -1 << nl;
        }
        else
        {
            for(i=n-1;i>=0;i--)
            {
                for(j=m-1;j>=0;j--)
                {
                    if((A[i][j]!=B[i][j]) && (A[i][j]==1))
                    {
                        if(j==0)
                        {
                            X1 = i-1, Y1 = 0, X2 = i, Y2 = 0;
                        }
                        else
                        {
                            X1 = i, Y1 = j-1, X2 = i, Y2 = j;
                        }
                        B[i][j] = 1;
                        X1++;
                        Y1++;
                        X2++;
                        Y2++;
                        x1.pb(X1);
                        y1.pb(Y1);
                        x2.pb(X2);
                        y2.pb(Y2);
                    }
                }
            }
            cout << x1.size() << nl;
            for(i=0;i<x1.size();i++)
            {
                cout << x1[i] << " " << y1[i] << " " << x2[i] << " " << y2[i] << nl;
            }
        }
    }
    return 0;
}