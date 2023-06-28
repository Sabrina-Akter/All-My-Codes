#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y, a, b, i, m, n;

    while(scanf("%lld", &t)==1)
    {
        if(t==0)
        {
            break;
        }

        scanf("%lld%lld", &x, &y);

        for(i=0;i<t;i++)
        {
            scanf("%lld%lld", &a, &b);
            m = a - x;
            n = b - y;
            if(m==0 || n==0)
            {
                printf("divisa\n");
            }
            else if(m>0 & n>0)
            {
                printf("NE\n");
            }
            else if(m>0 & n<0)
            {
                printf("SE\n");
            }
            else if(m<0 & n>0)
            {
                printf("NO\n");
            }
            else if(m<0 & n<0)
            {
                printf("SO\n");
            }
        }
    }
    return 0;
}
