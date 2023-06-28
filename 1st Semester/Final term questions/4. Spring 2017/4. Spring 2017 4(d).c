#include<stdio.h>
float display(int age[5]);
int main()
{
    int a[5],j;
    float k;
    printf("Enter the numbers:\n");
    for(j=0;j<5;j++)
    {
        scanf("%d", &a[j]);
    }
    display(a);
    return 0;
}

void display(int age[5])
{
    float sum = 0.0;
    int i;
    for(i=0;i<5;i++)
    {
        sum = sum + age[i];
    }
    printf("%f", sum);
}
