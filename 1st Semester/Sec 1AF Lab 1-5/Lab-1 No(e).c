#include<stdio.h>
#include<math.h>

main()
{
    int m,n;

    printf("Enter any two integers: ");
    scanf("%d%d", &m,&n);
    printf("The quotient of the given two integers is: %d\n", m/n);
    printf("The remainder of the given two integers is: %d\n", m%n);
    return 0;
}

