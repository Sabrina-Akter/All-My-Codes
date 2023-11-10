#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector <int> ans;
    unordered_map <int, int> visited;
    unordered_map <int, vector<int>> graph;

    void dfs(int node)
    {
        visited[node]=1;
        auto it = graph[node];
        for(auto &i:it)
        {
            if(visited[i]==0)
            {
                ans.push_back(i);
                dfs(i);
            }            
        }
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) 
    {
        
        unordered_map <int, int> two_ends;
        for(auto &it:adjacentPairs)
        {
            int num1 = it[0];
            int num2 = it[1];

            graph[num1].push_back(num2);
            graph[num2].push_back(num1);

            two_ends[num1]++;
            two_ends[num2]++;
            if(two_ends[num1]==2) two_ends.erase(num1);
            if(two_ends[num2]==2) two_ends.erase(num2);
        }
        auto start_ptr = two_ends.begin();
        int start = start_ptr->first;
        ans.push_back(start);
        dfs(start);
        
        return ans;
    }
};

int main()
{
    

    return 0;
}