#include <bits/stdc++.h>
using namespace std;

bool f(vector<int>& nums, int i, vector <int> &temp, int k, int &ans)
{
    bool ok = true;
    if(i == nums.size())
    {
        for(int j = 0; j < temp.size(); j++)
        {
            for(int l = 0; l < temp.size(); l++)
            {
                if(abs(temp[j] - temp[l]) == k)
                {
                    ok = false;
                    break;
                }
            }
            if(ok == false) break;
        }
        if(ok == true && temp.size() != 0) ans++;
    }
    else
    {
        temp.push_back(nums[i]);
        f(nums, i + 1, temp, k, ans);
        temp.pop_back();
        f(nums, i + 1, temp, k, ans);
    }
    return true;
}
int beautifulSubsets(vector<int>& nums, int k) 
{
    vector <int> temp;
    int ans = 0;
    f(nums, 0, temp, k, ans);
    return ans;
}

int main()
{
    

    return 0;
}