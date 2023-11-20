#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string findKey(string &s)
    {
        string ans;
        for(int i = 1; i < s.size(); i++)
        {
            int char1 = s[i - 1] - 'a' + 1;
            int char2 = s[i] - 'a' + 1;
            if(char1 <= char2) ans += to_string(char2 - char1);
            else ans += to_string((26 - char1) + char2);
            ans += ',';
        }
        return ans;
    }

    vector<vector<string>> groupStrings(vector<string>& strings) 
    {
        unordered_map <string, vector<string>> groups;
        for(auto &s : strings)
        {
            if(s.size() == 1) groups["-1"].push_back(s);
            else
            {
                string key = findKey(s);
                groups[key].push_back(s);
            }

        }
        vector<vector<string>> ans;
        for(auto &group : groups) ans.push_back(group.second);
        return ans;
    }
};

int main()
{
    

    return 0;
}