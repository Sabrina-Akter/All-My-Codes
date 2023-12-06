#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int totalMoney(int n) 
    {
        int sum = 0;
        int monday = 0;
        int num = 0;
        for(int i = 1; i <= n; i++)
        {
            num++;
            sum += num;
            if(i % 7 == 0)
            {
                monday++;
                num = monday;
            }
        }
        return sum;
    }
};

int main()
{
    

    return 0;
}