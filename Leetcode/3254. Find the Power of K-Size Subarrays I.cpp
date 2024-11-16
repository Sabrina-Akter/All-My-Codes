#include <bits/stdc++.h>
using namespace std;

vector<int> resultsArray(vector<int>& nums, int k) 
{
    vector <int> ans;
    int cnt = 0, x;
    for(int i = 0; i < nums.size(); i++)
    {
        if(i == 0 || nums[i] == nums[i - 1] + 1)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if(i >= k - 1)
        {
            if(cnt >= k) x = nums[i];
            else x = -1;
            ans.push_back(x);
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}