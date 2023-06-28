#include <stdio.h>
#include <stdio.h>

int main()
{
    int t, sum = 0, n,i;
    char A[10];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", A);
        if(!strcmp(A, "donate"))
        {
            scanf("%d", &n);
            sum = sum+n;
        }
        else if(!strcmp(A, "report"))
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}
