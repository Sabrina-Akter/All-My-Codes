#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        unordered_map <char, int> cnt;
        for(auto &c : s)
        {
            cnt[c]++;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(cnt[s[i]] == 1) return i;
        }
        return -1;
    }
};

int main()
{
    

    return 0;
}