#include <stdio.h>

int main()
{
    int T,S,W1,W2,W3,i,sum=0;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d%d%d%d", &S, &W1, &W2, &W3);
        if((W1+W2+W3)<=S)
        {
            sum++;
        }
        else if((W1+W2)<=S)
        {
            sum++;
            sum++;
        }
        else if((W1)<=S)
        {
            sum++;
            if((W2+W3)<=S)
            {
                sum++;
            }
            else if((W2)<=S)
            {
                sum++;
                sum++;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
