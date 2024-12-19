#include <bits/stdc++.h>
using namespace std;

int maxChunksToSorted(vector<int>& arr) 
{
    map <int, int> mp;
    int ans = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
        auto last = prev(mp.end());
        if(last->first == i) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}