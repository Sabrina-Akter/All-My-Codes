#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i, sum=0, cnt=0;
        for(i=0;i<costs.size();i++)
        {
            sum+=costs[i];
            if(sum>coins)
            {
                break;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    vector<int>cost = {1,3,2,4,1};
    int coins = 7;
    maxIceCream(cost, coins);
    return 0;
}