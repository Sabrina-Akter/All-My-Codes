#include <bits/stdc++.h>
using namespace std;

//TC = O(nm*logm)
//SC = O(n)
//Here, 'n' is the number of strings in the input vector, and 'm' is the maximum length of a string in that vector.
class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> groups;
        for(auto &str:strs)
        {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());
            groups[sorted_str].push_back(str);
        }

        vector<vector<string>> ans;
        for(auto &group:groups) ans.push_back(group.second);
        return ans;
    }
};

int main()
{
    return 0;
}