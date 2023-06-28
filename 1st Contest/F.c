#include <stdio.h>
int main()
{
    int n,i,x,k,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((array[i]&&array[j]) == array[k])
                {
                    x = k;
                    break;
                }
            }
        }
    }
    printf("%d\n",x);
    return 0;
}
