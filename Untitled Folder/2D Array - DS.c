#include <stdio.h>
int main()
{
    int A[6][6];
    int S[16];
    int i,j,h;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int n = -1;
    for( i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            int sum = A[i][j] + A[i-1][j] + A[i+1][j] + A[i-1][j-1] + A[i-1][j+1] + A[i+1][j-1] + A[i+1][j+1];
            n++;
            S[n] = sum;
        }
    }
    for(i=0;i<15;i++)
    {
        if(S[i]>S[i+1])
        {
            S[i+1] = S[i];
            int h = S[i+1];
        }
    }
    printf("%d\n", h);
    return 0;
}
