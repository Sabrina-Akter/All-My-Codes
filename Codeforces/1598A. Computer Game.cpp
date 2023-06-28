#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

#define N 1000
bool visit[N];
vector<int> g[N];
ll flag, num;
void dfs(int node)
{
    visit[node] = 1;
    int i, v;
    for (i = 0; i < g[node].size(); i++)
    {
        v = g[node][i];
        if (visit[v] == 0)
        {
            if(v==num)
            {
                flag=1;
            }
            dfs(v);
            //cout << "v = " << v << endl;
        }
    }
}

long long cell(long long Query_Row, long long Query_Column, long long Column)
{
    Query_Row=Query_Row+1;
    long long ANS;
    ANS = ((Query_Row-1)*Column)+Query_Column;
    ANS = ANS+1;
    return ANS;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k;
        flag=0;
        cin >> n;
        num = n*2;
        char A[2][n];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < n; j++)
            {
                //cout << "A[" << i << "][" << j << "] = " << A[i][j] << endl;
                if(A[i][j]=='0')
                {
                    for (k = 0; k < 8; k++)
                    {
                        //cout << i+X[k] << " AND " << j+Y[k] << endl;
                        //(row < 0 || row >= height || col < 0 || col >= width)
                        if ((i + X[k] >= 2) || (i + X[k] < 0) || (j + Y[k] >= n) || (j + Y[k] < 0))
                        {
                            continue;
                        }
                        else if((A[i+X[k]][j+Y[k]])=='0')
                        {
                            ll u, v;
                            u = cell(i,j,n);
                            v = cell(i+X[k], j+Y[k], n);
                            //cout << "u = " << u << " and v = " << v << endl;
                            g[u].push_back(v);
                            g[v].push_back(u);
                        }
                    }
                }
            }
        }
        dfs(1);
        if(flag==1)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
        for(i=0;i<=N;i++)
        {
            g[i].clear();
        }
        fill(visit,visit+N,0);
    }
    return 0;
}
