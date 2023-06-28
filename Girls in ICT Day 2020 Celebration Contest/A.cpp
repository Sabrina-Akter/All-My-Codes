#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    while(scanf("%lld%lld", &a, &b)==2)
    {
        if(a>b)
        {
            c = a - b;
        }
        else if(b>a)
        {
            c = b - a;
        }
        else if(a==b)
        {
            c = a - b;
        }
        printf("%lld\n", c);
    }
    return 0;
}

