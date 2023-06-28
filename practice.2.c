#include <stdio.h>

int main()
{
    int i,m, n, sum = 0;
    printf("Enter any positive integer: ");
    scanf("%d", &m);
    for(i=1;i>=n==0;i++){
        n = m/10;
        sum = sum + n;
        m = sum%10;
    }
    printf("The sum of the integer is: %d", sum);
    return 0;
}
