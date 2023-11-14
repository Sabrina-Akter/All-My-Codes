#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int countPalindromicSubsequence(string s) 
    {
        unordered_map <char, int> first;
        unordered_map <char, int> last;
        for(int i = 0; i < s.size(); i++)
        {
            if(first.count(s[i]) == false) first[s[i]] = i;
            last[s[i]] = i;
        }
        string letters = "abcdefghijklmnopqrstuvwxyz";
        unordered_map <string, int> done;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 0; j < letters.size(); j++)
            {
                string temp;
                temp.push_back(letters[j]);
                temp.push_back(s[i]);
                temp.push_back(letters[j]);                
                if((first.count(letters[j]) == true) && (last.count(letters[j]) == true) && done.count(temp) == false)
                {
                    if((first[letters[j]] < i) && (i < last[letters[j]]))
                    {
                        done[temp] = 1;
                    }
                }
            }
        }
        return done.size();
    }
};

int main()
{
    return 0;
}