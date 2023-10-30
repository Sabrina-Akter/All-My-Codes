#include <bits/stdc++.h>
using namespace std;

//TC = O(n)
//SC = O(1), because the size of the extra memory is constant (26).
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        int count[26] = {0};
        int length = s.size();

        for(int i=0; i<length; i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }

        for(auto &val:count)
        {
            if(val != 0) return false;
        }
        return true;
    }
};

int main()
{
    string s = "anagram", t = "nagaram";
    isAnagram(s, t);
    return 0;
}