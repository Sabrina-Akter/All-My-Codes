#include <bits/stdc++.h>
using namespace std;

vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) 
{
    vector <string> ans;
    string s;
    int last = -1;
    for(int i = 0; i < words.size(); i++)
    {
        if(groups[i] != last)
        {
            last = groups[i];
            s = words[i];
            ans.push_back(s);
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}