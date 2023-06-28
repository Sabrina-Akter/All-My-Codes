#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num=0, i=0, rem;
    while(n>0)
    {
        i++;
        rem = n%2;
        num=num+rem*pow(10,i);
        n=n/2;
    }
    printf("The binary number is %d", num);
    return 0;
}
