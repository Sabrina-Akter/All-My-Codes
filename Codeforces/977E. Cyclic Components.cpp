#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

bool visited[300000];
vll g[300000];
map <ll, ll> m;
ll ans=0, l1, l2;
ll stop;

void dfs(ll n)
{
    ll i;
    if(m[n]>2)
    {
        stop=1;
    }
    visited[n]=1;
    for(i=0;i<g[n].size();i++)
    {
        ll v = g[n][i];
        if(visited[v]==0)
        {
            l1=v;
            dfs(v);
        }
        else
        {
            l2=v;
            if(l1==l2 && stop==0)
            {
                ans++;
            }
        }
    }
}

int main()
{
    fastt;
    ll node, edge, i, a, b;
    cin >> node >> edge;
    for(i=0;i<edge;i++)
    {
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
        m[a]++;
        m[b]++;
    }
    for(i=1;i<=node;i++)
    {
        if(visited[i]==0)
        {
            stop=0;
            dfs(i);
        }
    }
    cout << ans << endl;
    return 0;
}
