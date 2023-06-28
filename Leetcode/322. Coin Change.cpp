#include <bits/stdc++.h>
using namespace std;

int i, done[15];

void dp(vector<int>& coins, int amount, int x)
{ 
    for(i=0;i<coins.size();i++)
    {
        if(done[i]==0)
        {
            dp(coins, amount = amount%coins[i], done[i]=1);
            cout << amount << endl;
        }
    }
}


int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        dp(coins, amount, 15);
        return 0;
    }

int main()
{
    vector <int> coins = {3,4,5};
    int amount=7;
    coinChange(coins, amount);
    return 0;
}