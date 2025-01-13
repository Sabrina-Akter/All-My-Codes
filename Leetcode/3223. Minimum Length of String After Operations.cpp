#include <bits/stdc++.h>
using namespace std;

int minimumLength(string s) 
{
    map <char, int> mp;
    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    for(auto &it : mp)
    {
        if(it.second % 2 == 0) ans += 2;
        else ans += 1;
    }
    return ans;
}

int main()
{
    

    return 0;
}