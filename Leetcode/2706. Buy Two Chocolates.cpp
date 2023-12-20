#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        sort(prices.begin(), prices.end());
        int sum = prices[0] + prices[1];
        int remaining = money - sum;
        return remaining >= 0 ? remaining : money;
    }
};

int main()
{
    

    return 0;
}