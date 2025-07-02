#include <bits/stdc++.h>
using namespace std;

int totalElements(vector<int> &arr) 
{
    int mx = 0, last = 0;
    unordered_map <int, int> mp;
    for(int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
        while(mp.size() == 3)
        {
            mp[arr[last]]--;
            if(mp[arr[last]] == 0) mp.erase(arr[last]);
            last++;
        }
        if(mp.size() <= 2) mx = max(mx, i - last + 1);
    }
    return mx;
}

int main()
{

    return 0;
}