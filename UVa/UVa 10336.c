#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

char A[1000][1000];
char CHAR;

void dfs(char c, ll x, ll y)
{
    A[x][y] = '*';
    ll X[4]={0,1,0,-1};
    ll Y[4]={1,0,-1,0};
    int k;
    for(k=0;k<4;k++)
    {
        if(A[x+X[k]][y+Y[k]]==CHAR)
        {
            dfs(CHAR,(x+X[k]),(y+Y[k]));
        }
    }
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            dfs(v);
        }
    }
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll c, r, i, j, k, num;
        cin >> c >> r;
        ll Al[27];
        fill(A,A+27,0);
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                cin >> A[i][j];
            }
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                if(A[i][j]!='*')
                {
                    CHAR = A[i][j];
                    cout << "CHAR = " << CHAR << endl;
                    dfs(CHAR, i, j);
                }
            }
        }
    }
    return 0;
}
