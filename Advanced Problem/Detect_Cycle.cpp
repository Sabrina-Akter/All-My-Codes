#include <iostream>
using namespace std;

int N;
int adj[505][505];

bool dfs(int u, int vis[], bool stk[])
{
    if(!vis[u]){
        vis[u] = 1;
        stk[u] = 1;
        for(int i = 0; i < N; i++){
            if(adj[u][i] == 0)
                continue;
            int v = i;
            if(!vis[v] && dfs(v, vis, stk))
                return true;
            else if(stk[v] == 1)
                return true;
        }
    }
    stk[u] = false;
    return false;
}

bool isCyclic()
{
    int vis[N+5] = {0};
    bool stk[N+5] = {0};

    for(int i = 0; i < N; i++){
        if(dfs(i, vis, stk)){
            return true;
        }
    }
    return false;
}

int main() {

	int t;
	cin >> t;

	while(t--){

	    int e;
	    cin >> N >> e;

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                adj[i][j] = 0;
        }
	    for(int i = 0; i < e; i++){
	        int u, v;
	        cin>>u>>v;
	        adj[u][v] = 1;
	    }

	    cout<<isCyclic()<<endl;
	}

	return 0;
}
