#include <bits/stdc++.h>
using namespace std;

string triangleType(vector<int>& nums) 
{
    map <int, int> mp;
    int a, b, c;
    for(int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]];
        if(i == 0) a = nums[i];
        else if(i == 1) b = nums[i];
        else if(i == 2) c = nums[i];            
    }
    if((a + b > c) && (b + c > a) && (a + c > b))
    {
        if(mp.size() == 1) return "equilateral";
        else if(mp.size() == 2) return "isosceles"; 
        else if(mp.size() == 3) return "scalene";
    }
    return "none";
}

int main()
{
    

    return 0;
}