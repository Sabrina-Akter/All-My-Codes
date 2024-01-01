#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        if(s.size() == 0) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(1)
        {
            if(s[j] >= g[i])
            {
                cnt++;
                i++;
                j++;
            }
            else 
            {
                j++;
            }
            if(i == g.size() || j == s.size()) break;
        }
        return cnt;
    }
};

int main()
{
    

    return 0;
}