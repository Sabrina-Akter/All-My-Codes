#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
      map <int, int> m;
      int i, f=0;  
      for(i=0;i<nums.size();i++)
      {
        m[nums[i]]++;
        if(m[nums[i]]==2)
        {
            f=1;
            break;
        }
      }
      if(f==0)
      {
        cout << "No" << endl;
        return false;
      }
      else
      {
        cout << "Yes" << endl;
        return true;
      }
    }

int main()
{
    vector <int> nums = {1,2,3,4};
    containsDuplicate(nums);
    return 0;
}