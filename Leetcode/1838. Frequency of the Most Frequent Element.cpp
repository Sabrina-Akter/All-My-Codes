#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
        vector <int> p(nums.size()+5);
        int left=0, right=0,sum=nums[0], mx=0; 
        p[0] = nums[0];
        while(left<=right)
        {
            if((((right+1-left)*nums[right+1]) - sum <= k) && right+1<nums.size())
            {
                right++;
                sum+=nums[right];
                p[right]=p[right-1]+nums[right];
                cout << left << " " << right << endl;
                cout << "A: " << sum << endl;
            }
            else
            {
                sum=p[right]-p[left];
                left++;
                cout << left << " " << right << endl;
                cout << "B: " << sum << endl;
            }
            if(left==right)
            {
                break;
            }
        }
        return 0;
    }

int main()
{
    vector <int> v = {1,1,1,2,2,4};
    int k = 2;
    maxFrequency(v, k);

    return 0;
}