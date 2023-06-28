#include <stdio.h>
#include <math.h>

int main()
{
    int n, num=0, i=0, rem;
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%2;
        num=num+rem*pow(10,i);
        i++;
        n=n/2;
    }
    printf("Binary number is %d", num);
    return 0;
}
