#include <bits/stdc++.h>
using namespace std;

    unordered_map <string, int> m;
    bool ans = false;
    int visited[310];

    void f(string s, vector<string>& wordDict, int sum, int index)
    {
        if(index==s.size()-1)
        {
            if(sum==s.size())
            {
                ans = true;
            }
        }
        else
        {
            string temp;
            for(int i=index+1;i<s.size();i++)
            {
                temp+=s[i];
                if(m[temp]==1 && visited[i]==-1) 
                {
                    f(s, wordDict, sum+temp.size(), i);
                    visited[i] = 1;
                }
            }
        }
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        memset(visited, -1, sizeof(visited));
        for(int i=0;i<wordDict.size();i++)
        {
            m[wordDict[i]] = 1;
        }
        f(s, wordDict, 0, -1);
        return ans;
    }

int main()
{
    string s = "applepenapple";
    vector <string> wordDict = {"apple","pen"};
    wordBreak(s, wordDict);

    return 0;
}