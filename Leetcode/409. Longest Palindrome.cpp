#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) 
{
    unordered_map <char, int> freq;
    int ans = s.size();
    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }
    bool odd = false;
    for(auto &it : freq)
    {
        if(it.second % 2 == 1 && odd == false)
        {
            odd = true;
        }
        else if(it.second % 2 == 1)
        {
            ans--;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}