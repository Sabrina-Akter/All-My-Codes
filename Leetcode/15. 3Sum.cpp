#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int i, prev=0;
      map <int, int> m;
      set <vector<int> > s;
      vector<vector<int>> ans;
      for(i=0;i<nums.size();i++)
      {
        m[nums[i]]++;
        if(m[nums[i]]==1)
        {
            int left, right, sum;
            if(i+1>=nums.size())
            {
                break;
            }
            else
            {
                left = i+1;
            }
            if(i+1==nums.size()-1)
            {
                break;
            }
            else
            {
                right = nums.size()-1;
            }
            while(left<right)
            {
                sum = nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                    cout << nums[i] << " " << nums[left] << " " << nums[right] << endl;
                    vector <int> v = {nums[i], nums[left], nums[right]};
                    s.insert(v);
                    if(s.size()!=prev)
                    {
                        ans.push_back(v);
                    }
                    prev = s.size();
                    left++;
                    right--;
                }
                else if(sum>0)
                {
                    right--;
                }
                else if(sum<0)
                {
                    left++;
                }
            }
        }
      }

      return ans;
    }

int main()
{
    vector<int> nums = {0,0,0};
    threeSum(nums);
    return 0;
}