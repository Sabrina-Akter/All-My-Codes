#include <bits/stdc++.h>
using namespace std;

int countPalindromicSubsequence(string s) 
{
    int n = s.size();
    unordered_map <int, int> first, last;
    for(int i = 0; i < n; i++)
    {
        if(first.count(s[i] - 'a') == false) first[s[i] - 'a'] = i;
        last[s[i] - 'a'] = i;
    }
    unordered_map <string, int> words;
    for(int i = 1; i < n - 1; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            string temp;
            if((first.count(j) && last.count(j)) && (first[j] < i && last[j] > i))
            {
                temp += ('a' + j) + (s[i]) + ('a' + j);
                temp += (s[i]);
                temp += ('a' + j);
                words[temp];
            }
        }
    }
    return words.size();
}

int main()
{
    

    return 0;
}