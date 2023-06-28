#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> m;
        int i;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector <pair<int, int> > v;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            int a = (*it).first, b = (*it).second;
            v.push_back({b,a});
        }
        sort(v.begin(), v.end(), greater <>());
        int size;
        if(k<v.size())
        {
            size = k;
        }
        else
        {
            size = v.size();
        }
        vector <int> ans;
        for(i=0;i<size;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }

int main()
{
    vector <int> nums = {1,1,1,2,2,3};
    int k = 2;
    topKFrequent(nums, k);
    return 0;
}