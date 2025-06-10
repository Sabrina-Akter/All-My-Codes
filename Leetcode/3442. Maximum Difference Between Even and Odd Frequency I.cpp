#include <bits/stdc++.h>
using namespace std;

int maxDifference(string s) 
{
    vector <int> freq(26);
    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    vector <int> odd, even;
    for(auto &it : freq)
    {
        if(it > 0)
        {
            if(it % 2 == 0) even.push_back(it);
            else odd.push_back(it);
        }
    }
    int ans = INT_MIN;
    for(int i = 0; i < odd.size(); i++)
    {
        for(int j = 0; j < even.size(); j++)
        {
            ans = max(ans, odd[i] - even[j]);
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}