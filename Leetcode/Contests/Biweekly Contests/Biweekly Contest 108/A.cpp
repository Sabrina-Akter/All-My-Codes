#include <bits/stdc++.h>
using namespace std;

    int alternatingSubarray(vector<int>& nums) {
        int i, j, mx=0, sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum=0;
            vector <int> v;
            string last;
            for(j=i;j<nums.size();j++)
            {
                if(j==i)
                {
                    v.push_back(nums[j]);
                }
                else
                {
                    if(last=="")
                    {
                        if(nums[j]-v[0]==1)
                        {
                            sum++;
                            mx = max(mx, sum);
                            last = "pos";
                            v.push_back(nums[j]);
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if(last=="pos")
                    {
                        if(nums[j]-v[v.size()-1]==-1)
                        {
                            sum++;
                            mx = max(mx, sum);
                            last = "neg";
                            v.push_back(nums[j]);
                        }
                        else
                        {
                            sum=0;
                            break;
                        }
                    }
                    else if(last=="neg")
                    {
                        if(nums[j]-v[v.size()-1]==1)
                        {
                            sum++;
                            mx = max(mx, sum);
                            last = "pos";
                            v.push_back(nums[j]);
                        }
                        else
                        {
                            sum=0;
                            break;
                        }
                    }
                }
            }
        }
        if(mx==0)
        {
            return -1;
        }
        else
        {
            return mx+1;
        }
    }

int main()
{
    vector<int> nums = {14,30,29,49,3,23,44,21,26,52};
    alternatingSubarray(nums);
    return 0;
}