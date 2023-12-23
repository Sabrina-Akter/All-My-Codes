#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool isPathCrossing(string path) 
    {
        int x = 0, y = 0;
        unordered_map <char, int> index = {{'N', 0}, {'S', 1}, {'W', 2}, {'E', 3}};
        set <pair<int, int>> visited;
        visited.insert({0, 0});
        int dr_x[] = {-1, +1, +0, +0};
        int dr_y[] = {+0, +0, -1, +1};
        for(int i = 0; i < path.size(); i++)
        {
            x += dr_x[index[path[i]]];
            y += dr_y[index[path[i]]];
            if(visited.count({x, y})) return true;
            visited.insert({x, y});
        }
        return false;
    }
};

int main()
{
    

    return 0;
}