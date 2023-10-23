#include <bits/stdc++.h>
using namespace std;

    int singleNumber(vector<int>& nums) {
        int singleElement=0;
        for(int element : nums)
        {
            singleElement^=element;
        }
        return singleElement;
    }

int main()
{
    vector <int> nums = {4,1,2,1,2};
    cout << singleNumber(nums);

    return 0;
}