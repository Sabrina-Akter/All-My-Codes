#include <bits/stdc++.h>
using namespace std;

vector<string> uncommonFromSentences(string s1, string s2) 
{
    unordered_map <string, int> freq;
    string temp;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == ' ' || i == s1.size() - 1) 
        {
            if(i == s1.size() - 1) temp += s1[i];
            freq[temp]++;
            temp = "";
        }
        else temp += s1[i];
    }
    temp = "";
    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == ' ' || i == s2.size() - 1) 
        {
            if(i == s2.size() - 1) temp += s2[i];
            freq[temp]++;
            temp = "";
        }
        else temp += s2[i];
    }
    vector <string> ans;
    for(auto &it : freq)
    {
        if(it.second == 1) ans.push_back(it.first);
    }
    return ans;
}

int main()
{
    

    return 0;
}