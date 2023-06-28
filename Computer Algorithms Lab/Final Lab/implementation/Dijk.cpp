#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int source, dest, weight;
};


struct Node {
    int vertex, weight;
};


class Graph
{
public:

    vector<vector<Edge>> adjList;
    Graph(vector<Edge> const &edges, int N)
    {
        adjList.resize(N);
        for (Edge const &edge: edges)
        {
            adjList[edge.source].push_back(edge);
        }
    }
};
struct comp
{
    bool operator()(const Node &lhs, const Node &rhs) const {
        return lhs.weight > rhs.weight;
    }
};
void findShortestPaths(Graph const &graph, int source, int N)
{
    priority_queue<Node, vector<Node>, comp> min_heap;
    min_heap.push({source, 0});
    vector<int> dist(N, INT_MAX);
    dist[source] = 0;
    vector<bool> done(N, false);
    done[source] = true;
    vector<int> prev(N, -1);
    while (!min_heap.empty())
    {
        Node node = min_heap.top();
        min_heap.pop();
        int u = node.vertex;
        for (auto i: graph.adjList[u])
        {
            int v = i.dest;
            int weight = i.weight;

            if (!done[v] && (dist[u] + weight) < dist[v])
            {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                min_heap.push({v, dist[v]});
            }
        }
        done[u] = true;
    }

    for (int i = 0; i < N; i++)
    {
        if (i != source && dist[i] != INT_MAX)
        {
            cout << "Path (" << source << " -> " << i << "): Minimum cost = "<< dist[i] << endl;
        }
    }
}

int main()
{
    vector<Edge> edges =
    {
        {0, 1, 10}, {0, 4, 3},
        {1, 2, 2}, {1, 4, 4},
        {2, 3, 9},
        {3, 2, 7},
        {4, 1, 1}, {4, 2, 8}, {4, 3, 2}
    };
    int N = 5;

    Graph graph(edges, N);

    int source = 0;
    findShortestPaths(graph, source, N);

    return 0;
}
