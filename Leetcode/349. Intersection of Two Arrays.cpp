#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map <int, int> common;
        for(auto &it : nums1)
        {
            common[it] = 1;
        }
        vector <int> ans;
        for(auto &it : nums2)
        {
            if(common.count(it) == true && common[it] == 1)
            {
                ans.push_back(it);
                common[it] = 0;
            }
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}