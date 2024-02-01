#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector <int> temp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i % 3 == 0 && i != 0)
            {
                ans.push_back(temp);
                temp.clear();
            }
            temp.push_back(nums[i]);
        }
        ans.push_back(temp);
        for(auto &it : ans)
        {
            if(it[2] - it[0] > k)
            {
                ans.clear();
                break;
            }
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}