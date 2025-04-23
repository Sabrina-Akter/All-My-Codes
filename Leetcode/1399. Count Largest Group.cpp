#include <bits/stdc++.h>
using namespace std;

int countLargestGroup(int n) 
{
    string s;
    int sum, largest = 0, ans = 0;
    unordered_map <int, int> mp;
    for(int i = 1; i <= n; i++)    
    {
        s = to_string(i); 
        sum = 0; 
        for(int j = 0; j < s.size(); j++)
        {
            sum += (s[j] - '0');
        }
        mp[sum]++;
        largest = max(largest, mp[sum]);
    } 
    for(auto &it: mp)
    {
        if(it.second == largest) ans++;
    }
    return ans;                            
}

int main()
{
    

    return 0;
}