#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s) 
{
    int n = s.size(); 
    unordered_map <int, int> first, last;
    for(int i = 0; i < n; i++)
    {
        if(first.count(s[i]) == 0) first[s[i]] = i;
        last[s[i]] = i;
    }
    vector <int> ans;
    int f, l;
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            f = first[s[i]];
            l = last[s[i]];
        }
        else
        {
            if(first[s[i]] > l && last[s[i]] > l)
            {
                ans.push_back(l - f + 1);
                f = first[s[i]];
                l = last[s[i]];
            }
            else
            {
                l = max(l, last[s[i]]);
            }
        }
    }
    ans.push_back(l - f + 1);
    return ans;
}

int main()
{
    string s = "abbccddefeg";
    partitionLabels(s);
    return 0;
}