#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ar[100][100];
    for(i=0;i<n;i++)
    {
        ar[i][i] = n;
    }
    for(j=1;j<n;j++)
    {
       for(i=0;i<n;i++)
       {
            ar[i][i+j] = n-j;
            ar[i+j][i] = n-j;
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
