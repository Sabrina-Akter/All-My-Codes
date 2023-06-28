#include <stdio.h>

int main()
{
    int x,y,z,flag=1,sum;
    scanf("%d", &x);
    sum = x;
    while(scanf("%d", &z)==1)
    {
        if(z>x)
        {
            y = x+1;
            while(1)
            {
                sum = sum + y;
                flag++;
                y++;
                if(sum>z)
                {
                    break;
                }
            }
            printf("%d\n",flag);
            break;
        }
    }
    return 0;
}
