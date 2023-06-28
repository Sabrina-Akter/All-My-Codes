#include <bits/stdc++.h>

int main()
{
    int k,n,j=1,i;
    scanf("%d%d", &n, &k);
    int a[n];
    if(k<=n)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                a[j] = i;
                j++;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                a[j] = i;
                j++;
            }
        }
    }
    printf("%d\n", a[k]);
    return 0;
}
