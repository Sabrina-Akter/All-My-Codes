#include<bits/stdc++.h>
using namespace std;

#define NN 100005
bool visit[NN];
vector <int> g[NN];
long long A[NN];
long long B[NN];
long long cnt=0, M, ans=0;

void dfs(long long v)
{
    visit[v] = 1;
    if(B[v]>M)
    {
        return;
    }
    long long cnt = 0;
    for (int u : g[v])
    {
        cout << "v = " << v+1 << " and u = " << u+1 << endl;
        if(visit[u])
        {
           ans++;
           cout << "Ans: " << ans << endl;
           continue;
        }
        B[u] = B[v] + 1;
        cout << "B[u] = " << B[u] << endl;
        if (A[u] == 0)
        {
            B[u] = 0;
        }
        dfs(u);
        cnt++;
        cout << "Count = " << cnt << endl;
    }
    return;
}
int main()
{
    long long t, n, e, i, u, v, N;
    cin >> N >> M;
    for(i=0;i<N;i++)
    {
        cin >> A[i];
    }
    for(i=0; i<N-1; i++)
    {
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    B[0]=A[0];
    dfs(0);
    cout << ans << endl;
    return 0;
}
