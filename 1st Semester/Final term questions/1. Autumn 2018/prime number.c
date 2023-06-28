#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,j=0;
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            j++;
            break;
        }
    }
    if(j==0)
    {
        printf("This is a prime number.");
    }
    else
    {
        printf("This is not a prime number.");
    }

    return 0;
}
