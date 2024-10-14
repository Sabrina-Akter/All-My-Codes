#include <bits/stdc++.h>
using namespace std;

long long maxKelements(vector<int>& nums, int k) 
{
    long long ans = 0;
    priority_queue<int> pq;
    for(int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
    }
    while(k--)
    {
        double three = 3;
        double num = pq.top();
        ans += num;
        pq.pop();
        pq.push(ceil(num / three));
    }
    return ans;
}

int main()
{
    

    return 0;
}