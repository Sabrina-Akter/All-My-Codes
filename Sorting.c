#include <stdio.h>
int main()
{
    int a[10] = {2,8,4,6,3,5,9,1,0,7};
    int i,x,y;

    for(i=0;i<10;i++)
    {
        if(a[i]>a[i+1])
        {
            x = a[i];
            y = x;
        }
        else
        {
            x = a[i+1];
            y = x;
        }
    }
    printf("%d", y);

    return 0;
}
