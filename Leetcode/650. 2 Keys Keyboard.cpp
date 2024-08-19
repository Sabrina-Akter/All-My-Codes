#include <bits/stdc++.h>
using namespace std;

int minSteps(int n) 
{
    int ans = 0;
    while(1)
    {
        if(n == 1) break;
        for(int i = n - 1; i >= 1; i--)
        {
            if(n % i == 0) 
            {
                ans += (n / i);
                n = i;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}