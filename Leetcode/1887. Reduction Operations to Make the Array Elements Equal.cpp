#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int reductionOperations(vector<int>& nums) 
    {
        map <int, int> count;
        for(int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        int ans = 0;
        int index = 0;
        for(auto &it : count)
        {
            ans += ((it.second) * index);
            index++;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}