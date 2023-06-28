#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int i, take = 0, next, f=0, mx=0;
    for(i=0;i<prices.size();i++)
    {
        if(i+1<prices.size())
        {
            next = prices[i+1];
        }
        else
        {
            next = prices[i]-1;
        }
        if(f==0)
        {
            if(prices[i]<next)
            {
                take-=prices[i];
                f=1;
                mx = 0;
            }
        }
        else if(f==1)
        {
            mx = max(mx, prices[i]);
            if(prices[i]>next)
            {
                take+=mx;
                f=0;
                i--;
            }
        }
    } 
    return take;  
    }

int main()
{
    vector<int> prices = {2,1};
    maxProfit(prices);
    return 0;
}