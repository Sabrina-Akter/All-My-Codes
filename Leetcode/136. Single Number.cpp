#include <bits/stdc++.h>
using namespace std;

    int singleNumber(vector<int>& nums) {
        int XOR=0;
        for(int element : nums)
        {
            XOR^=element;
        }
        return XOR;
    }

int main()
{
    vector <int> nums = {4,1,2,1,2};
    cout << singleNumber(nums);

    return 0;
}