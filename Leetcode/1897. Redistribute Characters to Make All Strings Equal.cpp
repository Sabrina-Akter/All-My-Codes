#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool makeEqual(vector<string>& words) 
    {
        unordered_map <char, int> Count;
        for(auto &word : words)
        {
            for(auto &c : word) Count[c]++;
        }
        for(auto &cnt : Count)
        {
            if(cnt.second % words.size() != 0) return false;
        }
        return true;
    }
};

int main()
{
    

    return 0;
}