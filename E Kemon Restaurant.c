#include <stdio.h>
int main()
{
    int n,f,i,h,j,ans,sum=0,stop=0;

    scanf("%d", &n);

    int A[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    if(n%2!=0)
    {

        h = (n-1)/2;
    }
    else
    {

        h = n/2;
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<((n/2)+1);j++)
        {
        if(A[j]==1 && A[j+h]==2)
        {
            sum++;

            if(sum==h)
            {
                printf("2");
                ans = h;
                stop=1;
                break;
            }
            else if(sum>h)
            {
                break;
            }

        }
        }
        if(sum!=h)
        {
            sum = 0;
            h = h - 1;
        }
    }

    if(n%2!=0)
    {

        h = (n-1)/2;
    }
    else
    {

        h = n/2;
    }

    for(i=0;i<n;i++)
    {
        if(stop==1)break;
        for(j=0;j<((n/2)+1);j++)
        {
            if(A[j]==2 && A[j+h]==1)
        {
            sum++;

            if(sum==h)
            {
                printf("1");
                ans = h;
                break;
            }
            else if(sum>h)
            {
                break;
            }
        }
    }
        if(sum!=h)
        {
            sum = 0;
            h = h - 1;
        }
    }
    printf("\n%d\n", (ans));

    return 0;
}
