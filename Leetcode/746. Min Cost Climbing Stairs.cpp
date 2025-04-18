#include <bits/stdc++.h>
using namespace std;

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev1 = 0, prev2 = 0;

        for (int i = 2; i <= n; i++) {
            int current_cost = min(prev1 + cost[i - 1], prev2 + cost[i - 2]);
            prev2 = prev1;
            prev1 = current_cost;
        }

        return prev1;
    }

int main()
{
    vector<int> v = {1,100,1,1,1,100,1,1,100,1};
    minCostClimbingStairs(v);

    return 0;
}