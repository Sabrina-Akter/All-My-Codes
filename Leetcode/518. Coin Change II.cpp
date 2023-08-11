#include <bits/stdc++.h>
using namespace std;

    map<pair<int,int>, int> m;

    int f(int ind, int amount, vector<int>& coins)
    {
        if(m.find({ind,amount})!=m.end())
        {
            return m[{ind, amount}];
        }
        else if(ind==coins.size() || amount<=0)
        {
            if(amount==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            int ans = f(ind, amount-coins[ind], coins) + f(ind+1, amount, coins);
            return m[{ind, amount}] = ans;
        }
    }

    int change(int amount, vector<int>& coins) 
    {
        sort(coins.begin(), coins.end());
        return f(0, amount, coins);
    }

int main()
{
    vector <int> coins = {1,2,5};
    int amount = 5;
    change(amount, coins);

    return 0;
}