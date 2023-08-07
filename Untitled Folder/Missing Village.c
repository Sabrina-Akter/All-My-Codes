#include <stdio.h>

int main()
{
    int t,i,j,n,sum=0,c=0;
    char C,D;

    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%c", &D);
        char A[n];
        for(j=0;j<n;j++)
        {
            scanf("%c", &C);
            A[j] = C;
        }
        for(j=0;j<n;j++)
        {
            if(A[j]=='.' && A[j+1]=='#')
            {
                sum++;
                j++;
                continue;
            }
            else if(A[j]=='#' && A[j+1]=='.')
            {
                sum++;
            }
        }
        c++;
        printf("Case %d: %d\n", c, sum);
        sum = 0;
    }

    return 0;
}
