#include <bits/stdc++.h>
using namespace std;

    int avg, subset=0;
    bool ans=false;

    void f(vector<int>& nums, int k, int ind, int sum, map<int, int>& m)
    {
        if(ind==nums.size()-1)
        {
            cout << "sum = " << sum << endl;
            if(sum==avg)
            {
                subset++;
                cout << "subset = " << subset << endl;
            }
        }
        else
        {
            f(nums, k, ind+1, sum, m);
            if(subset+1<=k && sum+nums[ind+1]<=avg && m.find(ind+1)==m.end())
            {
                m[ind+1] = 1;
                f(nums, k, ind+1, sum+nums[ind+1], m);
                m.erase(ind+1);
            }
        }
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sm=0;
        for(int i=0;i<nums.size();i++)
        {
            sm+=nums[i];
        }
        if(sm%k==0)
        {
            avg = sm/k;
            map <int, int> m;
            f(nums, k, -1, 0, m);
            cout << ans << endl;
            return ans;
        }
        else
        {
            return false;
        }    
    }

int main()
{
    //vector<int> nums = {10,10,7,8,10,4,9,7,9,10,4,6,7,1,8,5};
    vector<int> nums = {4,3,2,3,5,2,1};
    int k=4;
    canPartitionKSubsets(nums, k);
    return 0;
}