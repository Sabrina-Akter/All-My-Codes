#include <stdio.h>
int main()
{
    int t,i,a,p,j,food,flag=0,position=0;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d", &a, &p);
        int A[a];
        for(j=0;j<a;j++)
        {
            scanf("%d", &A[j]);
        }
        for(j=0;j<a;j++)
        {
            if(p<=A[j])
            {
                food = (A[j]-p);
                A[j+1] = food + A[j+1];
            }
            else if(p>A[j])
            {
                flag = 1;
                position = j + 1;
                break;
            }
        }
        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO %d\n", position);
        }
        food=0;
        flag=0;
        position=0;
    }
    return 0;
}
