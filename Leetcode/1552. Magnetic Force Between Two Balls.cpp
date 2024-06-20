#include <bits/stdc++.h>
using namespace std;

bool possible(int mid, vector<int>& position, int m)
{
    int last = position[0], cnt = 1;
    for(int i = 0; i < position.size(); i++)
    {
        if(position[i] - last >= mid)
        {
            last = position[i];
            cnt++;
        }
        if(cnt == m) return true;
    }
    return false;
}
int maxDistance(vector<int>& position, int m) 
{
    int n = position.size();
    sort(position.begin(), position.end());
    int left = 1, right = position[n - 1], mid, ans;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(possible(mid, position, m))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}