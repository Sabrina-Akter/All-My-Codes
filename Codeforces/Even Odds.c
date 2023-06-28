#include <stdio.h>

int main()
{
    int a,b,flag=-1, position=0, count = 0, sum=0,i;
    scanf("%d%d", &a, &b);
    int A[a];
    for(i=0;i<a;i++)
    {
        if(a%2==0)
        {
            if(b<=a/2)
            {
                flag = flag + 2;
                position++;
                sum = sum + position;
                A[position-1] = flag;
            }
            else
            {
                count = count + 2;
                sum++;
                A[sum-1] = count;
            }
        }
        else
        {
            if(b<=((a/2)+1))
            {
                flag = flag + 2;
                position++;
                sum = sum + position;
                A[position-1] = flag;
            }
            else
            {
                count = count + 2;
                sum++;
                A[sum-1] = count;
            }
        }
    }
    printf("%d", A[b]);
    return 0;
}
