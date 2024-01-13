#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minSteps(string s, string t) 
    {
        unordered_map <char, int> freq;
        for(auto &c : s)
        {
            freq[c]++;
        }
        for(auto &c : t)
        {
            if(freq.count(c) == true && freq[c] > 0) freq[c]--;
        }
        int ans = 0;
        for(auto &it : freq)
        {
            ans += it.second;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}