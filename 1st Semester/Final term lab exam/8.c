#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, c, b, m, cmp;
    float a;

    printf("Enter the numbers of Physics, Chemistry, Biology, Maths & Computer: ");
    scanf("%d%d%d%d%d", &p, &c, &b, &m, &cmp);

    a = (p+c+b+m+cmp)/5.00;

    if(a>=90)
    {
        printf("Grade: A");
    }
    else if(a>=80)
    {
        printf("Grade: B");
    }
    else if(a>=70)
    {
        printf("Grade: C");
    }
    else if(a>=60)
    {
        printf("Grade: D");
    }
    else if(a>=40)
    {
        printf("Grade: E");
    }
    else if(a<40)
    {
        printf("Grade: F");
    }

    return 0;
}
