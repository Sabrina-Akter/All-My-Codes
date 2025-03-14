#include <bits/stdc++.h>
using namespace std;

int maximumCandies(vector<int>& candies, long long k) 
{
    long long sum = 0;
    for(int i = 0; i < candies.size(); i++) sum += candies[i];
    if(sum < k) return 0;

    sort(candies.rbegin(), candies.rend());
    
    long long left = 1, right = sum / k, mid, cnt, ans;
    bool ok;
    while(left <= right)
    {
        mid = ((left + right) / 2);
        cnt = 0;
        ok = false;
        for(int i = 0; i < candies.size(); i++)
        {
            cnt += (candies[i] / mid);
            if(cnt >= k)
            {
                ok = true;
                break;
            }
        }
        if(ok)
        {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return ans;
}

int main()
{
    

    return 0;
}