#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) 
    {
        unordered_map <char, int> freq;
        for(auto &it : s)
        {
            freq[it]++;
        }
        string ans;
        for(auto &it : order)
        {
            for(int i = 0; i < freq[it]; i++)
            {
                ans += it;
            }
            freq[it] = 0;
        }
        for(auto &it : s)
        {
            if(freq[it] > 0)
            {
                for(int i = 0; i < freq[it]; i++)
                {
                    ans += it;
                }
                freq[it] = 0;
            }
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}