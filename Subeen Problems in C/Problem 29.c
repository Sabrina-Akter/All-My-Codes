#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    char A[t],B;
    for(i=0;i<t;i++)
    {
        scanf("%c", &B);
        scanf("%c", &A[i]);
    }
    for(i=0;i<t;i++)
    {
        if(A[i]>64 && A[i]<91)
        {
            printf("Uppercase Character\n");
        }
        else if(A[i]>96 && A[i]<123)
        {
            printf("Lowercase Character\n");
        }
        else if(A[i]>47 && A[i]<58)
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }
    return 0;
}
