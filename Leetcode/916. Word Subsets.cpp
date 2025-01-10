#include <bits/stdc++.h>
using namespace std;

vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
{
    map <char, int> mp, x;
    for(int i = 0; i < words2.size(); i++)
    {
        x.clear();
        for(int j = 0; j < words2[i].size(); j++)
        {
            x[words2[i][j]]++;
            mp[words2[i][j]] = max(mp[words2[i][j]], x[words2[i][j]]);
        }
    }
    vector <string> ans;
    vector <int> temp(26);
    int cnt;
    for(int i = 0; i < words1.size(); i++)
    {
        cnt = 0;
        for(int j = 0; j < words1[i].size(); j++)
        {
            temp[words1[i][j] - 'a']++;
            if(mp.count(words1[i][j]) && mp[words1[i][j]] == temp[words1[i][j] - 'a'])
            {
                cnt++;
            }
        }
        if(cnt == mp.size()) ans.push_back(words1[i]);
        temp.assign(26, 0);
    }
    return ans;
}

int main()
{
    

    return 0;
}