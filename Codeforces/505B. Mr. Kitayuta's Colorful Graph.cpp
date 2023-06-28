#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 110

vector <pair<long, long> > v[N];
set <pair<long, long> > SET[N];
vector <pair<long, long> > v2;

bool visit[N];
vector <int> g[N];
ll J, Q2;
ll ans, A[N];
void dfs(int node)
{
    visit[node]=1;
    ll i, vv;
    for(i=0;i<g[node].size();i++)
    {
        vv = g[node][i];
        if(vv==Q2 && visit[vv]==0)
        {
            A[J]++;
            visit[vv]=1;
            //cout << "A[" << J << "] = " << A[J] << endl;
        }
        else if(visit[vv]==0)
        {
            dfs(vv);
        }
    }
}

int main()
{
    fastt;
    ll node, edge, a, b, c, i, j, Q, U, V, c1, c2, temp, SIZE;
    cin >> node >> edge;
    for(i=0;i<edge;i++)
    {
        cin >> a >> b >> c;
        SIZE = SET[c].size();
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        SET[c].insert(make_pair(a,b));
        if(SIZE==SET[c].size())
        {
            continue;
        }
        else
        {
            v[c].pb(make_pair(a, b));
        }
    }
    /*for(i=0;i<N;i++)
    {
        cout << "i = " << i << endl;
        for(j=0;j<v[i].size();j++)
        {
            cout << v[i][j].first << " " << v[i][j].second << endl;
        }
    }*/
    cin >> Q;
    for(i=0;i<Q;i++)
    {
        cin >> a >> b;
        v2.pb(make_pair(a, b));
    }
    ///
    for(i=0; i<N; i++)
    {
        //cout << "I = " << i << endl;
        if(v[i].size()==0)
        {
            continue;
        }
        for(j=0; j<v[i].size(); j++)
        {
            U = v[i][j].first;
            V = v[i][j].second;
            g[U].push_back(V);
            g[V].push_back(U);
        }
        for(j=0; j<Q; j++)
        {
            J=j;
            U = v2[j].first;
            Q2 = v2[j].second;
            //cout << "U = " << U << endl;
            if(visit[U]==0)
            {
                dfs(U);
            }
            fill(visit,visit+N,0);
        }
        for(j=0; j<N; j++)
        {
            g[j].clear();
        }
        fill(visit,visit+N,0);
    }
    for(i=0;i<Q;i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
