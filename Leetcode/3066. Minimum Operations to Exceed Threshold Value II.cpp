#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) 
{
    priority_queue <long long, vector<long long>, greater<long long> > pq; 
    for(int i = 0; i < nums.size(); i++) pq.push(nums[i]);
    long long x, y; 
    int ans = 0;
    while(1)
    {
        if(pq.top() >= k) break;
        else
        {
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            pq.push((min(x, y) * 2) + max(x, y));
            ans++;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}