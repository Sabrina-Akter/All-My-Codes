#include <bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>& edges) 
{
    unordered_map <int, int> freq;
    int ans;
    for(int i = 0; i < edges.size(); i++)
    {
        freq[edges[i][0]]++;
        freq[edges[i][1]]++;
        if(freq[edges[i][0]] == edges.size()) ans = edges[i][0];
        if(freq[edges[i][1]] == edges.size()) ans = edges[i][1];
    }
    return ans;
}

int main()
{
    vector<vector<int>> edges = {{1,2},{5,1},{1,3},{1,4}};
    findCenter(edges);
    return 0;
}