#include <bits/stdc++.h>
using namespace std;

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    int i, j;
    vector<string> ans;
    for(i=0;i<words.size();i++)  
    {
        map <char, char> m1; 
        map <char, int> m2, m3;
        if(pattern.size()==words[i].size())
        {
            int f=0;
            for(j=0;j<words[i].size();j++)
            {
                if(m2[words[i][j]]==0)
                {
                    m2[words[i][j]] = 1;
                    if(m3[pattern[j]]==0)
                    {
                        m1[words[i][j]] = pattern[j];
                        m3[pattern[j]] = 1;
                    }
                    else
                    {
                        f=1;
                    }
                }
                else
                {
                    if(m1[words[i][j]] != pattern[j])
                    {
                        f=1;
                    }
                }
            }
            if(f==0)
            {
                cout << words[i] << endl;
                ans.push_back(words[i]);
            }
        }
        } 
    return ans; 
    }

int main()
{
    vector<string> v = {"qqcojjumwp","mqidrqudxu","xwrvnueult","lubbymxyro","fcvxuskhcl"};
    string pattern = "rdzkpkbmda";
    findAndReplacePattern(v, pattern);
    return 0;
}