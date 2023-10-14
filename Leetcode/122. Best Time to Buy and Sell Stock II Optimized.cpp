#include <bits/stdc++.h>
using namespace std;
//TC = O(n)
//SC = O(1)
    int maxProfit(vector<int>& prices) {
        int i, mx = prices[i], mn = prices[i], dif, sum=0, n=prices.size();
        for(i=1;i<n;i++)
        {
            if(prices[i]<prices[i-1])
            {
                dif = mx-mn;
                sum+=dif;
                mn = prices[i];
                mx = prices[i]; 
            }
            mx = max(mx, prices[i]);
        }
        dif = mx - mn;
        sum+=dif;
        return sum;
    }

int main()
{
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices);

    return 0;
}