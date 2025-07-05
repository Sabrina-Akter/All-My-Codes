#include <bits/stdc++.h>
using namespace std;

int findLucky(vector<int>& arr) 
{
    unordered_map <int, int> mp;
    for(int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    int mx = -1;
    for(auto &it : mp)
    {
        if(it.first == it.second) mx = max(mx, it.first);
    }
    return mx;
}

int main()
{  

    return 0;
}