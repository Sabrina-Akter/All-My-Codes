#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector <pair<int, int> > v;
    int i, cnt=0, last;
    for(i=0;i<nums.size();i++)
    {
        v.push_back({nums[i], i});
    }
    sort(v.begin(), v.end());

    for(i=0;i<v.size();i++)
    {
        int a = v[i].first, b = v[i].second;
        if(i==0)
        {
            cnt++;
            last = i;
        }
        else if(v[last].second<b && v[last].first<a)
        {
            last = i;
            cnt++;
        }
    }
    return cnt;  
    }

int main()
{
    vector <int> nums = {10,9,2,5,3,7,101,18};
    lengthOfLIS(nums);
    return 0;
}