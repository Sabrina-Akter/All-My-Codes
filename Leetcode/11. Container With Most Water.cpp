#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
       int left=0, right=height.size()-1, pro, mx=INT32_MIN;
       while(left<right)
       {
            pro = (right-left)*(min(height[right], height[left]));
            mx = max(mx, pro);
            if(height[left]>=height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
       }
       cout << mx << endl;
       return mx;
    }

int main()
{
    vector<int> height = {1,1};
    maxArea(height);
    return 0;
}