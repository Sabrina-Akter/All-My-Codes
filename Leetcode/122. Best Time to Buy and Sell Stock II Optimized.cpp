#include <bits/stdc++.h>
using namespace std;
//TC = O(n)
//SC = O(1)
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mx = prices[0]; 
        int mn = prices[0]; 
        int dif; 
        int sum=0; 
        
        for(int i=1;i<n;i++)
        {
            if(prices[i]<prices[i-1])
            {
                dif = mx-mn;
                sum+=dif;
                mx = prices[i];
                mn = prices[i]; 
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