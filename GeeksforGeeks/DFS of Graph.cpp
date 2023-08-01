//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> my_ans;
    int visited[10005];

    void dfs(int node, vector<int> adj[])
    {
        visited[node] = 1;
        my_ans.push_back(node);
        int i;
        for(i=0;i<adj[node].size();i++)
        {
            if(visited[adj[node][i]]==-1)
            {
                dfs(adj[node][i], adj);
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        my_ans.clear();
        memset(visited, -1, sizeof(visited));
        int i;
        for(i=0;i<V;i++)
        {
            if(visited[i]==-1)
            {
                dfs(i, adj);
            }
        }
        return my_ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends