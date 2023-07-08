#include <bits/stdc++.h>
using namespace std;

    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        multiset<int> mySet;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mySet.insert(nums[i]);
        }
        for(i=0;i<moveFrom.size();i++)
        {
            int from = moveFrom[i], to = moveTo[i];
            while(1)
            {
                auto it = lower_bound(mySet.begin(), mySet.end(), from);
                if (it == mySet.end() || (*it)!=from) 
                {
                    break;  
                }
                else
                {
                    mySet.erase(it);
                    mySet.insert(to);
                }
            }
        }
        set <int> S;
        vector <int> nn;
        for(auto x: mySet)
        {
            S.insert(x);
        }
        for(auto y:S)
        {
            nn.push_back(y);
        }
        nums = nn;
        return nums;
    }

int main()
{
    vector <int> nums = {1,1,3,3};
    vector <int> v1 = {1,3};
    vector <int> v2 = {2,2};
    relocateMarbles(nums, v1, v2);
    return 0;
}