#include<bits/stdc++.h>
using namespace std;

#define MX 100005

vector < int > graph[MX];
bool vis[MX];
int dist[MX];
int parent[MX];

void bfs(int source){
    queue < int > Q;
    vis[source] = 1;
    dist[source] = 0;
    Q.push(source);

    while(!Q.empty()){
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++){
            int next = graph[node][i];
            if (vis[next] == 0){
                vis[next] = 1;
                dist[next] = dist[node] + 1;
                Q.push(next);
                parent[next] = node;
            }
        }
    }
}


int main()
{
    int n, q, s, d, D, i, j, last=0;
    cin >> n >> q;

    for (i = 0; i <n-1; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(i=0;i<q;i++)
    {
        cin >> s >> d;
        if(i!=0 && s!=last)
        {
            fill(vis,vis+MX,0);
            parent[MX]={0};
            dist[MX]={0};
        }
        bfs(s);
        D = dist[d];
        if(D%2==0)
        {
            cout << "Town" << endl;
        }
        else
        {
            cout << "Road" << endl;
        }
        last = s;
    }
    return 0;
}
