#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        unordered_map <int, int> m;
        for(auto &it : arr)
        {
            m[it]++;
        }
        vector <int> v;
        for(auto &it : m)
        {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        int cnt = 0, mn;
        for(auto &it : v)
        {
            mn = min(it, k);
            it -= mn;
            if(it == 0) cnt++;
            k -= mn;
            if(k == 0) break;
        }
        return v.size() - cnt;
    }
};

int main()
{
    

    return 0;
}