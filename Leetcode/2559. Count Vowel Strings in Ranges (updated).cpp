#include <bits/stdc++.h>
using namespace std;

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
{
    map <char, int> mp = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};
    vector <int> v(words.size() + 5);
    int last, sum = 0;
    for(int i = 0; i < words.size(); i++)
    {
        last = words[i].size() - 1;
        if(mp[words[i][0]] == 1 && mp[words[i][last]] == 1) sum++;
        v[i] = sum;
    }
    vector <int> ans;
    for(int i = 0; i < queries.size(); i++)
    {
        if(queries[i][0] == 0) ans.push_back(v[queries[i][1]]);
        else ans.push_back(v[queries[i][1]] - v[queries[i][0] - 1]);
    }
    return ans;
}

int main()
{
    

    return 0;
}