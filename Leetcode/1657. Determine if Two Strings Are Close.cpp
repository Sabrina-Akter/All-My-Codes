#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool closeStrings(string word1, string word2) 
    {
        unordered_map <char, int> freq1, freq2;
        for(auto &c : word1)
        {
            freq1[c]++;
        }
        for(auto &c : word2)
        {
            if(freq1.count(c) == true) freq2[c]++;
            else false;
        }
        vector <int> count1, count2;
        for(auto &it : freq1)
        {
            count1.push_back(it.second);
        }
        for(auto &it : freq2)
        {
            count2.push_back(it.second);
        }
        if(count1.size() != count2.size()) return false;
        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());
        for(int i = 0; i < count1.size(); i++)
        {
            if(count1[i] != count2[i]) return false;
        }
        return true;
    }
};

int main()
{
    

    return 0;
}