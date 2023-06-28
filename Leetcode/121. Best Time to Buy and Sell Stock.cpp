#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int i, s=prices[0], dif=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<s)
            {
                s = prices[i];
            }
            dif = max(prices[i]-s, dif);
        }
        return dif;
    }

int main()
{
    vector <int> v = {7,1,5,3,6,4};
    cout << maxProfit(v);

    return 0;
}