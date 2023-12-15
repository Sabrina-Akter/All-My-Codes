#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string destCity(vector<vector<string>>& paths) 
    {
        unordered_set<string> cities;
        for (auto &path : paths)
        {
            cities.insert(path[0]);
        }

        for (auto &path : paths) 
        {
            string &dest = path[1];
            if (cities.find(dest) == cities.end()) 
            {
                return dest;
            }
        }
        return "";
    }
};

int main()
{
    

    return 0;
}