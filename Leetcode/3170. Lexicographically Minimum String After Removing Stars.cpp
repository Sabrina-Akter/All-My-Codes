#include <bits/stdc++.h>
using namespace std;

string clearStars(string s) 
{
    map <char, vector <int>> mp;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '*')
        {
            auto it = mp.begin();
            it->second.pop_back();
            if(it->second.empty()) mp.erase(it->first);
        }
        else mp[s[i]].push_back(i);
    }
    unordered_map <int, int> num;
    for(auto &x : mp)
    {
        for(auto &y : x.second) num[y] = 1;
    }
    string ans;
    for(int i = 0; i < s.size(); i++) if(num[i] == 1) ans += s[i];
    return ans;
}

int main()
{
    

    return 0;
}