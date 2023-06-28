#include <stdio.h>

int main()
{
    int t,i,sum,rank = 1;
    scanf("%d", &t);
    int x[t][4];
    int SUM[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d", &x[i][0], &x[i][1], &x[i][2], &x[i][3]);
        sum = (x[i][0]) + (x[i][1]) + (x[i][2]) + (x[i][3]);
        SUM[i] = sum;
    }
    for(i=1;i<t;i++)
    {
        if(SUM[0]<SUM[i])
        {
            rank++;
        }
    }
    printf("%d", rank);

    return 0;
}
