#include <bits/stdc++.h>
using namespace std;

vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(int i = 0; i < nums.size(); i++) pq.push({nums[i], i});
    int x, y;
    while(k--)
    {
        x = pq.top().first * multiplier;
        y = pq.top().second;
        pq.pop();
        pq.push({x, y});
    }
    vector <int> ans(nums.size());
    while(!pq.empty())
    {
        ans[pq.top().second] = pq.top().first;
        pq.pop();
    }
    return ans;
}

int main()
{
    

    return 0;
}