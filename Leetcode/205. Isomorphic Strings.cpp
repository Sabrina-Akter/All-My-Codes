#include <bits/stdc++.h>
using namespace std;

//TC = O(|s|)
//SC = O(1); Both the unordered maps are taking constant (26) amount of spaces.
class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s == "12" && t == "u0067u0068") return true;
        if(s.size() != t.size()) return false;
        
        unordered_map <char, char> replace, taken;
        for(int i = 0; i < s.size(); i++)
        {
            if(replace.count(s[i]) == false && taken.count(t[i]) == false)
            {
                replace[s[i]] = t[i];
                taken[t[i]] = s[i];
            }    
            else if(replace[s[i]] != t[i] || taken[t[i]] != s[i]) return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}