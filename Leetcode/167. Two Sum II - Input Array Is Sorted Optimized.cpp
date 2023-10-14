#include <bits/stdc++.h>
using namespace std;

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size(), pointer_1=0, pointer_2=n-1;
        while(pointer_1<pointer_2)
        {
            int sum = numbers[pointer_1] + numbers[pointer_2];
            if(sum>target)
            {
                pointer_2--;
            }
            else if(sum<target)
            {
                pointer_1++;
            }
            else if(sum==target)
            {
                ans = {pointer_1+1, pointer_2+1};
                break;
            }
        } 
        return ans;  
    }

int main()
{
    vector <int> nums = {1,3,4,5,7,10,11};
    int target = 9;
    twoSum(nums, target);

    return 0;
}