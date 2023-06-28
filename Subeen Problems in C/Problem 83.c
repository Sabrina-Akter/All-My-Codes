#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, d, l;
    long long int r;
    char A[1001];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", A);
        l = strlen(A);
        d = A[l-1];
        r = d%10;
        if(A[l-1]=='1' || r==2 || r==4 || r==6 || r==0)
        {
            printf("It's a power of 2\n");
        }
        else
        {
            printf("Not a power of 2\n");
        }
    }
    return 0;
}
