#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i,j=0;
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", prime(a));
    return 0;
}
