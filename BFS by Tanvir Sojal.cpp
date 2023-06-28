#include<bits/stdc++.h>
using namespace std;

#define MX 110

vector < int > graph[MX];
bool vis[MX];
int dist[MX];
int parent[MX];

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

/*
input:
7 9
1 2
1 3
1 7
2 3
3 7
2 4
4 5
3 6
5 6
1
*/

// path printing function
// iterative function
void printPathIterative(int source, int node){
    vector<int> path_vector;

    while(node != source){
        path_vector.push_back(node);
        node = parent[node];
    }
    path_vector.push_back(source); // inserting source

    for (int i = path_vector.size() - 1; i >= 0; i--){
        cout << path_vector[i] << " ";
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
        graph[v].push_back(u);
    }

    int source;
    cin >> source;

    bfs(source);

    cout << "From node " << source << endl;
    for (int i = 1; i <= nodes; i++){
        cout << "Distance of " << i << " is : " << dist[i] << endl;
    }
    cout << endl;

    // path printing example


    // iterative version
    for (int i = 1; i <= nodes; i++){
        cout << "Path from source to " << i << ": ";
        printPathIterative(source, i);
        cout << endl;
    }

    return 0;
}
