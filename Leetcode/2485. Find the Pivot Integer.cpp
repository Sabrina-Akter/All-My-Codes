#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int pivotInteger(int n) 
    {
        for(int i = 1; i <= n; i++)
        {
            int sum_so_far = (i * (i + 1)) / 2;
            int sum_till_end = (n * (n + 1)) / 2;
            int sum_of_right = sum_till_end - (((i - 1) * (i)) / 2);
            if(sum_so_far == sum_of_right) return i;
        }
        return -1;
    }
};

int main()
{
    

    return 0;
}