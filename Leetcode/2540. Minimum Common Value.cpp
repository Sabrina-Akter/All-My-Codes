#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        map <int, int> freq;
        for(auto &it : nums1)
        {
            freq[it] = 1;
        }
        for(auto &it : nums2)
        {
            if(freq.count(it) == 1) freq[it] = 2;
        }
        for(auto &it : freq)
        {
            if(it.second == 2) return it.first;
        }
        return -1;
    }
};

int main()
{
    

    return 0;
}