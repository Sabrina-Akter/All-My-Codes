#include <bits/stdc++.h>
using namespace std;

//TC = O(|s|)
//SC = O(1); Since the size of the extra memory is constant (26).
class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size()!=t.size()) return false;

        int count[26] = {0};
        for(int i=0; i<s.size(); i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }

        for(auto &val:count) if(val != 0) return false;
        return true;
    }
};

int main()
{
    return 0;
}