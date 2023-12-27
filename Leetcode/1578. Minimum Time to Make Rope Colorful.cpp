#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        colors += '*';
        neededTime.push_back(0);
        int sum = 0;
        int total = 0;
        int mx = 0;
        for(int i = 0; i < colors.size(); i++)
        {
            if(i == 0 || colors[i - 1] == colors[i])
            {
                mx = max(mx, neededTime[i]);
            }
            else
            {
                sum += mx;
                mx = neededTime[i];
            }
            total += neededTime[i];
        }
        return total - sum;
    }
};

int main()
{
    

    return 0;
}