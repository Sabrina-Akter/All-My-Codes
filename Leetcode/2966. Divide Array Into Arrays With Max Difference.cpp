#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> divideArray(vector<int>& nums, int k) 
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector <int> x;
    for(int i = 0; i < nums.size(); i++)
    {
        x.push_back(nums[i]);
        if((i + 1) % 3 == 0)
        {
            ans.push_back(x);
            x.clear();
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i][2] - ans[i][0] > k)
        {
            ans.clear();
            break;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}