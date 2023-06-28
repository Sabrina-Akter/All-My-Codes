#include <stdio.h>

int main()
{
    int i,sum=0, marks[4]={4, 3, 2, 1, 0};
    for(i=0;i<4;i++)
    {
        sum = marks[i] + marks[i+1];
        printf("%d. %d\n", i, sum);
    }
    return 0;
}
