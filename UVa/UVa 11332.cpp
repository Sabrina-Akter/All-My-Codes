#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum,x;
    while(scanf("%lld", &n)==1)
    {
        sum = 0;
        if(n==0)
        {
            break;
        }
        while(1)
        {
            x = n%10;
            sum = sum + x;
            n = n/10;
            if(n==0 && sum>9)
            {
                n = sum;
                sum = 0;
                continue;
            }
            else if(n==0 && sum<10)
            {
                break;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
