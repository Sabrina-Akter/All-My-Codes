#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) 
{
    int ans = numBottles, full_bottle, empty_bottle = numBottles, empty_rest;
    while(1)
    {
        full_bottle = empty_bottle / numExchange;
        ans += full_bottle;
        empty_rest = empty_bottle % numExchange;
        empty_bottle = full_bottle + empty_rest;
        if(empty_bottle < numExchange) break;
    }
    return ans;
}

int main()
{
    

    return 0;
}