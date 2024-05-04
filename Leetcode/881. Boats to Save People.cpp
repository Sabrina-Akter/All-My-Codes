#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) 
{
    sort(people.begin(), people.end());
    int left = 0, right = people.size() - 1;
    int ans = 0;
    while(left <= right)
    {
        if((people[left] + people[right] <= limit && left != right) || (left == right && people[left] <= limit))
        {                
            left++;                
        }
        right--;
        ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}