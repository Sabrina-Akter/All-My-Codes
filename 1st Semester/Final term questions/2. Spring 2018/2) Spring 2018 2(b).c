#include <stdio.h>
#include <stdlib.h>

int multiple(int a, int b)
{
   if(a%b==0)
   {
       return 1;
   }
   else
       return 0;
}

int main()
{
    int x,y,n,i;
    printf("How many pair of integers?\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("\nInput the two numbers: ");
        scanf("%d%d", &x, &y);
        printf("\n%d\n", multiple(x,y));
    }
    return 0;
}

