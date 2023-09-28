#include <bits/stdc++.h>
using namespace std;

    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> even, odd, ans;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        for(i=0;i<even.size();i++)
        {
            ans.push_back(even[i]);
        }
        for(i=0;i<odd.size();i++)
        {
            ans.push_back(odd[i]);
        }
        return ans;
    }

int main()
{
    

    return 0;
}