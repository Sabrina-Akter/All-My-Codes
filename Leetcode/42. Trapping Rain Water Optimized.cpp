#include <bits/stdc++.h>
using namespace std;

    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int ans=0, left_max=0, right_max=0;
        while(left<=right){
            
            if(height[left]<=height[right])
            {
                if(height[left]>=left_max)
                {
                    left_max=height[left];
                } 
                else
                {
                    ans+=left_max-height[left];
                }  
                left++;
            }
            else
            {
                if(height[right]>=right_max)
                {
                    right_max= height[right];
                } 
                else
                {
                    ans+=right_max-height[right];
                }        
                right--;
            }
        }
        return ans;
    }

int main()
{
    vector<int>height = {0,1,0,2,1,0,1,3,2,1,2,1};
    trap(height);

    return 0;
}