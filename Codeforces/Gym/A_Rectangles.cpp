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
    ll n, m, i, j, one, zero, sum=0;
    cin >> n >> m;
    ll A[n][m];
    for(i=0;i<n;i++)
    {
        one = 0, zero = 0;
        for(j=0;j<m;j++)
        {
            cin >> A[i][j];
            if(A[i][j]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        sum+= (pow(2,one)-1)+(pow(2,zero)-1);
    }
    for(i=0;i<m;i++)
    {
        one = 0, zero = 0;
        for(j=0;j<n;j++)
        {
            cin >> A[j][i];
            if(A[j][i]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        sum+= (pow(2,one)-1)+(pow(2,zero)-1)-one-zero;
    }
    cout << sum << nl;
    return 0;
}