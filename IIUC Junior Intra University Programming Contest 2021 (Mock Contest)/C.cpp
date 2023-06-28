#include<bits/stdc++.h>
using namespace std;

#define MX 110

vector < int > graph[MX];
bool vis[MX];
int dist[MX];
int parent[MX];
int Cnt = 0;

void bfs(int source){
    queue < int > Q;
    // initialization
    vis[source] = 1;
    dist[source] = 0;
    Q.push(source);

    while(!Q.empty()){
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++){
            int next = graph[node][i];
            if (vis[next] == 0){
                vis[next] = 1; // visit
                dist[next] = dist[node] + 1; // update
                Q.push(next); // push to queue

                // set parent
                parent[next] = node;
            }
        }
    }
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    int source;
    cin >> source;
    for(int i = 1;i<=nodes;i++)
    {
        bfs(i);
        if(dist[source]>0)
        {
            Cnt++;
        }
    fill(vis,vis+MX,0);
    fill(dist,dist+MX,0);
    fill(parent,parent+MX,0);
    }
    cout << Cnt << endl;

    return 0;
}
