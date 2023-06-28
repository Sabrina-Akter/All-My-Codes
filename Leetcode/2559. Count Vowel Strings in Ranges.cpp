#include <bits/stdc++.h>
using namespace std;

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector <int> v, ans;
        int sum=0, i;
        unordered_map <char, int> m;
        m['a'] = 1, m['e'] = 1, m['i'] = 1, m['o'] = 1, m['u'] = 1;
        for(i=0;i<words.size();i++)
        {
            if(m[words[i][0]]==1 && m[words[i][words[i].size()-1]]==1)
            {
                sum++;
            }
            v.push_back(sum);
        }
        for(i=0;i<queries.size();i++)
        {
            int a = queries[i][0], b = queries[i][1], result;
            if(a==0)
            {
                result = v[b];
            }
            else
            {
                result = v[b] - v[a-1];
            }
            ans.push_back(result);
        }
        return ans;
    }

int main()
{
    vector <string> v = {"aba","bcb","ece","aa","e"};
    vector<vector<int>> x = {{0,2}, {1,4}, {1,1}};
    vowelStrings(v, x);
    return 0;
}