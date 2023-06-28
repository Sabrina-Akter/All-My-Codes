#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& nums) {
        int i, sum = 0, ans=0;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end()); 
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>0)
            {
                ans++;
            }
        }
        cout << ans << endl;
        return ans;
    }

int main()
{
    vector <int> nums = {-687767,-860350,950296,52109,510127,545329,-291223,-966728,852403,828596,456730,-483632,-529386,356766,147293,572374,243605,931468,641668,494446};
    maxScore(nums);
    return 0;
}