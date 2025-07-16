#include <bits/stdc++.h>
using namespace std;

int maximumLength(vector<int>& nums) 
{
    int odd = 0, even = 0, both = 0;
    string last = "empty";
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] % 2 == 0) even++;
        else odd++;
        if((last == "empty" || last == "odd") && (nums[i] % 2 == 0))
        {
            both++;
            last = "even";
        }
        else if((last == "empty" || last == "even") && (nums[i] % 2 == 1))
        {
            both++;
            last = "odd";
        }
    }
    return max(max(odd, even), both);
}

int main()
{
    

    return 0;
}