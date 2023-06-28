#include <stdio.h>

int main()
{
    int t1, t2, i, j, k=0, stop=0,m,n;

    scanf("%d", &t1);
    int a[t1];

    for(i=0;i<t1;i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &t2);
    int b[t2];

    for(i=0;i<t2;i++)
    {
        scanf("%d", &b[i]);
    }

    int z[t1*t2];

    for(i=0;i<t1;i++)
    {
        for(j=0;j<t2;j++)
        {
            z[k] = a[i] + b[j];
            printf("z[%d] = %d\n", k, z[k]);
            k++;
        }
    }
    k=0;


    return 0;
}
