#include <stdio.h>
void volume(int a, int b);

int main()
{
    int t, a, b, i, x, flag=0;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d", &a, &b);
        volume(a,b);
    }
    return 0;
}

void volume(int a, int b)
{
    int x,flag = 0;
    if(a>=b)
        {
            while(1)
            {
                if((b+5)==a)
                {
                    flag++;
                    break;
                }
                else if((b+5)<a)
                {
                    flag++;
                    a = a - 5;
                }
                else if((b+5)>a)
                {
                    if((b+2)==a)
                    {
                        flag++;
                        break;
                    }
                    else if((b+2)<a)
                    {
                        flag++;
                        a = a - 2;
                    }
                    else if((b+2)>a)
                    {
                        if((b+1)==a)
                        {
                            flag++;
                            break;
                        }
                        else if((b+1)<a)
                        {
                            flag++;
                            a = a - 1;
                        }
                        else if((b+1)>a)
                        {
                            flag++;
                            break;
                        }
                    }
                }
            }
        }
        else if(b>=a)
        {
            x = a;
            a = b;
            b = x;
            while(1)
            {
                if((b+5)==a)
                {
                    flag++;
                    break;
                }
                else if((b+5)<a)
                {
                    flag++;
                    a = a - 5;
                }
                else if((b+5)>a)
                {
                    if((b+2)==a)
                    {
                        flag++;
                        break;
                    }
                    else if((b+2)<a)
                    {
                        flag++;
                        a = a - 2;
                    }
                    else if((b+2)>a)
                    {
                        if((b+1)==a)
                        {
                            flag++;
                            break;
                        }
                        else if((b+1)<a)
                        {
                            flag++;
                            a = a - 1;
                        }
                        else if((b+1)>a)
                        {
                            flag++;
                            break;
                        }
                    }
                }
            }
        }
        printf("%d\n", flag);
        flag = 0;
}
