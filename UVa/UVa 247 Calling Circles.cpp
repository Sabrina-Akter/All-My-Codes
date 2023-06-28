#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

vll g[1000];
bool visited[1000];

map <string, ll> m1;
map <ll, string> m2;

void dfs(ll node)
{
    visited[node]=1;
    ll i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visited[v]==0)
        {
            cout << m2[v] << " ";
            dfs(v);
        }
    }
}

int main()
{
    fastt;
    ll n, e, c=0;
    while(cin >> n >> e)
    {
        if(n==0 && e==0)
        {
            break;
        }
        c++;
        string a, b;
        ll i, x=0;
        for(i=0;i<e;i++)
        {
            cin >> a >> b;
            if(m1[a]==0)
            {
                x++;
                m1[a]=x;
                m2[x]=a;
            }
            if(m1[b]==0)
            {
                x++;
                m1[b]=x;
                m2[x]=b;
            }
            g[m1[a]].pb(m1[b]);
        }
        cout << "Calling circles for data set " << c << ":" << endl;
        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                cout << m2[i] << " ";
                dfs(i);
                cout << endl;
            }
        }
        for(i=0;i<=n;i++)
        {
            g[i].clear();
        }
        memset(visited,0,sizeof (visited));
    }
    return 0;
}
