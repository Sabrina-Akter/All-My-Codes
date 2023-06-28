#include<stdio.h>

int main()
{
    long long int x,y,z;
    scanf("%lld%lld%lld", &x, &y, &z);

    while((a>1 && b>1) || (a>1 && c>1) || (b>1 && c>1))
    {
        if(x>y && x>z)
    {
        printf("Highest = %lld\n", x);
        if(y>z)
            printf("Lowest = %lld\n", z);
        else if(z>y)
            printf("Lowest = %lld\n", y);
        else if(y==z)
            printf("Lowest = %lld\n", y);
    }
    else if(y>x && y>z)
    {
        printf("Highest = %lld\n", y);
        if(x>z)
            printf("Lowest = %lld\n", z);
        else if(z>x)
            printf("Lowest = %lld\n", x);
        else if(x==z)
            printf("Lowest = %lld\n", x);
    }
    else if(z>x && z>y)
    {
        printf("Highest = %lld\n", z);
        if(x>y)
            printf("Lowest = %lld\n", y);
        else if(y>x)
            printf("Lowest = %lld\n", x);
        else if(x==y)
            printf("Lowest = %lld\n", y);
    }
    else if(x==y && x>z)
    {
        printf("Highest = %lld\n", x);
        printf("Lowest = %lld\n", z);
    }
    else if(x==y && z>x)
    {
        printf("Highest = %lld\n", z);
        printf("Lowest = %lld\n", x);
    }
    else if(y==z && x>y)
    {
        printf("Highest = %lld\n", x);
        printf("Lowest = %lld\n", y);
    }
    else if(y==z && y>x)
    {
        printf("Highest = %lld\n", y);
        printf("Lowest = %lld\n", x);
    }
    else if(x==z && x>y)
    {
        printf("Highest = %lld\n", x);
        printf("Lowest = %lld\n", y);
    }
    else if(x==z && y>x)
    {
        printf("Highest = %lld\n", y);
        printf("Lowest = %lld\n", x);
    }
    else if(x==z && x==y)
    {
        printf("Highest = %lld\n", x);
        printf("Lowest = %lld\n", x);
    }
    }

    return 0;
}
