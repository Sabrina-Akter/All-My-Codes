#include <bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums) {
        nums.push_back(INT16_MAX);
        int cnt=0, i, last=INT16_MAX, dif, c=2, j; 
        for(i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                dif = nums[i]-nums[i-1];
                if(last==dif)
                {
                    c++;
                }
                else
                {
                    if(c>=3)
                    {
                        for(j=c;j>=3;j--)
                        {
                            cnt++;
                            cnt+=(c-j);
                        }
                    }
                    c=2;
                }
                last = dif;
            }
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    vector <int> nums = {1,1,1,1,1,1};
    numberOfArithmeticSlices(nums);
    return 0;
}