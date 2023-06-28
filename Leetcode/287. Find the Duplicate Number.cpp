#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int i, d;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==2)
            {
                d = nums[i];
            }
        }
        return d;
    }

int main()
{
    vector <int> v = {3,1,3,4,2};
    cout << findDuplicate(v);
    return 0;
}