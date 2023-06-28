#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,c=0,a,b;
    while(scanf("%d", &t)==1)
    {
        a=0;
        b=0;
        c++;
        if(t==0)
        {
            break;
        }
        for(i=0;i<t;i++)
        {
            scanf("%d", &n);
            if(n==0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        printf("Case %d: %d\n", c, (b-a));
    }
    return 0;
}
