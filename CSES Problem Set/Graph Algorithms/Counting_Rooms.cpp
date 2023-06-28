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

char A[1005][1005];
ll row, col;


void func(ll i, ll j)
{
    A[i][j] = '#';
    //left
    if(A[i][j-1]=='.' && j-1>=0)
    {
        func(i, j-1);
    }
    //right
    if(A[i][j+1]=='.' && j+1<col)
    {
        func(i, j+1);
    }
    //top
    if(A[i-1][j]=='.' && i-1>=0)
    {
        func(i-1, j);
    }
    //bottom
    if(A[i+1][j]=='.' && i+1<row)
    {
        func(i+1, j);
    }
}

int main()
{
    fastt;
    ll i, j, ans=0;
    cin >> row >> col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin >> A[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(A[i][j]=='.')
            {
                ans++;
                func(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

