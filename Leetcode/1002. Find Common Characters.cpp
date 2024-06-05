#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string>& words) 
{
    vector <int> letters (26, INT_MAX);
    for(int i = 0; i < words.size(); i++)
    {
        unordered_map <int, int> freq;
        for(int j = 0; j < words[i].size(); j++)
        {
            freq[words[i][j] - 'a']++;
        }
        for(int k = 0; k < 26; k++)
        {
            letters[k] = min(letters[k], freq[k]);
        }
    }
    vector <string> ans;
    for(int i = 0; i < 26; i++)
    {
        if(letters[i] != INT_MAX)
        {
            for(int j = 0; j < letters[i]; j++)
            {
                ans.push_back(string(1, i + 'a'));
            }
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}