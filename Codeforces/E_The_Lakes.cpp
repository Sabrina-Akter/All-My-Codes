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

bool visited[1005][1005];

ll dfs(vector<vector<ll>>& v, ll i, ll j, ll sum, ll row, ll col)
{
    visited[i][j]=true;
    int k;
    for(k=0;k<=3;k++)
    {
        if((i+X[k])<row && (i+X[k])>=0 && (j+Y[k])<col && (j+Y[k])>=0)
        {
            if(visited[i+X[k]][j+Y[k]]==false && v[i+X[k]][j+Y[k]]!=0)
            {
                sum = dfs(v, i+X[k], j+Y[k], sum+v[i+X[k]][j+Y[k]], row, col);
            }
        }
    }
    return sum;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        memset(visited, false, sizeof(visited));
        ll row, col, i, j, x;
        cin >> row >> col;
        vector <vector<ll> > v(row);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin >> x;
                v[i].push_back(x);
            }
        }
        ll mx=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(visited[i][j]==false && v[i][j]!=0)
                {
                    ll X = dfs(v, i, j, v[i][j], row, col);
                    if(X>mx)
                    {
                        mx = X;
                    }
                }
            }
        }
        cout << mx << nl;
    }
    return 0;
}