#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string sortVowels(string s) 
    {
        string vowels;
        map <char, int> mp = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}};
        for(int i = 0; i < s.size(); i++)
        {
            if(mp[s[i]] == 1) vowels += s[i];
        }
        sort(vowels.begin(), vowels.end());
        string ans;
        int ind = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(mp[s[i]] == 0) ans += s[i];
            else
            {
                ans += vowels[ind];
                ind++;
            }  
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}