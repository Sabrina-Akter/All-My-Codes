#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c=0,j;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        int sum = 0;
        if((a%2)==0)
        {
            a = a+1;
        }
        if((b%2)==0)
        {
            b = b-1;
        }
        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
            {
                sum = sum + j;
            }
        }
        c++;
        printf("Case %d: %d\n", c,sum);
    }
    return 0;
}
