#include <stdio.h>
int main()
{
    int t,i,j,flag=0,k;
    char A[1001], B[1001];

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%s%s", A, B);

        int l1 = strlen(A);
        int l2 = strlen(B);

            for(j=(l2-1), k=(l1-1);j>=0;j--,k--)
            {
                if(B[j]!=A[k])
                {
                    flag++;
                }

            }
        if(flag==0)
        {
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
        flag = 0;
    }


    return 0;
}
