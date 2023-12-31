#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        unordered_map <char, int> first;
        int ans = -1;
        for (int i = 0; i < s.size(); i++) 
        {
            if (first.count(s[i]))
                ans = max(ans, i - first[s[i]] - 1);
            else
                first[s[i]] = i;
        }
        return ans;
    }
};


int main()
{
    

    return 0;
}